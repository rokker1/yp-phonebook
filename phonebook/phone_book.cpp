#include "phone_book.h"

using namespace std;

// Напишите тут реализации методов и функций, 
// декларированных в phone_book.h
PhoneBook DeserializePhoneBook(std::istream& input) {
    phone_book_serialize::ContactList object;
    if(!object.ParseFromIstream(&input)) {
        return PhoneBook({});
    }

    std::vector<Contact> temporary_contacts;

    std::for_each(object.contact().begin(), object.contact().begin(),
                  [&temporary_contacts](const phone_book_serialize::Contact& contact){
                      Contact temporary_contact{contact.name()};

                      if(contact.has_birthday()) {
                          temporary_contact.birthday->year = contact.birthday().year();
                          temporary_contact.birthday->month = contact.birthday().month();
                          temporary_contact.birthday->day = contact.birthday().day();
                      }

                      if(!contact.phone_number().empty()) {
                          std::for_each(contact.phone_number().begin(), contact.phone_number().end(),
                                        [&temporary_contact](const std::string& phone){
                                            temporary_contact.phones.push_back((std::move(phone)));
                                        });
                      }
                  });

    return PhoneBook(temporary_contacts);
}