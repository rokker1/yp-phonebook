#pragma once

#include "iterator_range.h"
#include <contact.pb.h>
#include <optional>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
#include <algorithm>
#include <execution>

struct Date {
    int year, month, day;
};

struct Contact {
    std::string name;
    std::optional<Date> birthday;
    std::vector<std::string> phones;
};

class PhoneBook {
public:
    explicit PhoneBook(std::vector<Contact> contacts)
        : contacts_(contacts) {
        std::sort(contacts_.begin(), contacts_.end(), [](const Contact& lhs, const Contact& rhs){
            return std::lexicographical_compare(
                    lhs.name.begin(), lhs.name.end(),
                    rhs.name.begin(), rhs.name.end()
                    );
        });
    }

    // Корректный тип итератора определите сами.
    // Можно и нужно поменять этот using:
    using Iterator = std::vector<Contact>::iterator;
    using ConstIterator = std::vector<Contact>::const_iterator;

    using ContactRange = IteratorRange<ConstIterator>;

    ContactRange FindByNamePrefix(std::string_view name_prefix) const {
        auto it_begin = std::lower_bound(
                    contacts_.begin(), contacts_.end(), name_prefix,
                    [name_prefix](const Contact& l, std::string_view r){
                        r = name_prefix;
                        return l.name < r;
                    }
        );

        auto it_end = std::upper_bound(
                contacts_.begin(), contacts_.end(), name_prefix,
                [name_prefix](std::string_view l, const Contact& r){
                    l = name_prefix;
                    std::string_view r_name(r.name.substr(l.length()));
                    return l < r_name;
                }
        );
        ContactRange range{it_begin, it_end};

        return range;
    }

    void SaveTo(std::ostream& output) const {
        phone_book_serialize::ContactList object;
        phone_book_serialize::Contact temporary_contact;


        std::for_each(contacts_.begin(), contacts_.end(),
                      [&temporary_contact, &object](Contact contact){

            // зададим имя
            temporary_contact.set_name(contact.name);

            // елси у контакта в базе есть дата дня рождения, зададим ее
            if(contact.birthday.has_value()) {
                phone_book_serialize::Date date;
                date.set_year(contact.birthday->year);
                date.set_month(contact.birthday->month);
                date.set_day(contact.birthday->day);
                *temporary_contact.mutable_birthday() = std::move(date);
            }

            if(!contact.phones.empty()) {
                std::for_each(contact.phones.begin(), contact.phones.end(),
                              [&temporary_contact](std::string phone){
                    temporary_contact.add_phone_number(std::move(phone));
                });
            }

            object.mutable_contact()->Add(std::move(temporary_contact));
            temporary_contact.clear_birthday();
            temporary_contact.clear_name();
            temporary_contact.clear_phone_number();
        });
        object.SerializeToOstream(&output);
    }

private:
    std::vector<Contact> contacts_;
};

PhoneBook DeserializePhoneBook(std::istream& input);