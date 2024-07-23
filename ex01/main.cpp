#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

Contact inputContact() {
    std::string first, last, nick, phone, secret;

    std::cout << "Enter first name: ";
    std::cin >> first;
	if (std::cin.fail()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
	if (std::cin.eof()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
    std::cout << "Enter last name: ";
    std::cin >> last;
	if (std::cin.fail()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
	if (std::cin.eof()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
    std::cout << "Enter nickname: ";
    std::cin >> nick;
	if (std::cin.fail()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
	if (std::cin.eof()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
    std::cout << "Enter phone number: ";
    std::cin >> phone;
	if (std::cin.fail()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
	if (std::cin.eof()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
    std::cout << "Enter darkest secret: ";
    std::cin >> secret;
	if (std::cin.fail()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}
	if (std::cin.eof()) {
		std::cout << "Invalid input. Please try again." << std::endl;
		exit(1);
	}

    return Contact(first, last, nick, phone, secret);
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, or EXIT): ";
        std::cin >> command;


		if(std::cin.fail()) {
			std::cout << "Invalid command. Please try again." << std::endl;
			exit(1);
		}
		if(std::cin.eof()) {
			std::cout << "Invalid command. Please try again." << std::endl;
			exit(1);
		}
			
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
