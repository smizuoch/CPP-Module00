#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <array>

class PhoneBook {
private:
    std::array<Contact, 8> contacts;
    int currentIndex;
    int totalContacts;

public:
    PhoneBook();

    void addContact(const Contact& contact);
    void searchContact() const;
    void displayContactList() const;
    void displayContact(int index) const;
};

#endif // PHONEBOOK_HPP
