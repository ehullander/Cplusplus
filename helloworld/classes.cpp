#include <iostream>

enum class Race {
    Elf,
    Human,
    Dwarf,
    Hobbit
};

struct Book {
    char name[256];
    int year = 0;
    int pages = 0;
    bool ebook = true;
};

int main()
{
    Race race = Race::Hobbit;
    switch(race) {
    case Race::Hobbit: {
        std::cout << "You work hard\n";
        } break;
    case Race::Elf: {
        std::cout << "You are smart\n";
        } break;
    }

    Book book;
    std::cout << "Title: \n";
    std::cin >> book.name;
    std::cout << "year: \n";
    std::cin >> book.year;
    std::cout <<  "pages: \n";
    std::cin >> book.pages;

    return 0;

}