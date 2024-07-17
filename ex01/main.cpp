#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

Contact inputContact() {
    std::string first, last, nick, phone, secret;

    std::cout << "Enter first name: ";
    std::cin >> first;
    std::cout << "Enter last name: ";
    std::cin >> last;
    std::cout << "Enter nickname: ";
    std::cin >> nick;
    std::cout << "Enter phone number: ";
    std::cin >> phone;
    std::cout << "Enter darkest secret: ";
    std::cin >> secret;

    return Contact(first, last, nick, phone, secret);
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, or EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            phoneBook.addContact(inputContact());
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}