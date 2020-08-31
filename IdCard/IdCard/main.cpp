//
//  main.cpp
//  IdCard
//
//  Created by Kevin Racapé on 19/08/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>

struct User
{
    std::string name{};
    std::string firstname{};
    int age{};
    long referenceNumber{};
};

struct Adress
{
    int numberOfStreet{};
    std::string nameOfStreet{};
    int zipCode{};
    std::string city{};
    std::string country{};
};

struct Characteristics
{
    float size{};
    std::string eyeColor{};
    std::string hairColor{};
};

struct Birthday
{
    int day{};
    std::string month{};
    int year{};
};

struct ID
{
    User user;
    Adress adress;
    Characteristics characteristics;
    Birthday birthday;
};

int main()
{
    ID kevinId{};

    std::cout << "\t ID Form \n";
    std::cout << "Name : ";
    std::getline(std::cin,kevinId.user.name);
    
    std::cout << "Firstname : ";
    std::getline(std::cin,kevinId.user.firstname);
    
    std::cout << "Age : ";
    std::cin >> kevinId.user.age;
    std::cin.ignore(1);
    
    std::cout << "Reference number : ";
    std::cin >> kevinId.user.referenceNumber;
    std::cin.ignore(2,'\n');
    std::cout << std::endl;
    
    std::cout << "\t Birthday \n";
    std::cout << "Day : ";
    std::cin >> kevinId.birthday.day;
    std::cin.ignore(2,'\n');
    
    std::cout << "Month : ";
    std::getline(std::cin,kevinId.birthday.month);
    
    std::cout << "Year : ";
    std::cin >> kevinId.birthday.year;
    std::cin.ignore(4,'\n');
    std::cout << std::endl;
    
    std::cout << "\t Characteristic form \n";
    std::cout << "Eye color : ";
    std::getline(std::cin,kevinId.characteristics.eyeColor);
    
    std::cout << "Hair color : ";
    std::getline(std::cin,kevinId.characteristics.hairColor);
    
    std::cout << "Size : ";
    std::cin >> kevinId.characteristics.size;
    std::cin.ignore(2,'\n');
    std::cout << std::endl;
    
    std::cout << "\t Adress form \n";
    std::cout << "Number of street : ";
    std::cin >> kevinId.adress.numberOfStreet;
    std::cin.ignore(2,'\n');
    
    std::cout << "Name of street : ";
    std::getline(std::cin,kevinId.adress.nameOfStreet);
    
    std::cout << "ZIP code : ";
    std::cin >> kevinId.adress.zipCode;
    std::cin.ignore(2,'\n');
    
    std::cout << "City : ";
    std::getline(std::cin,kevinId.adress.city);
    
    std::cout << "Country : ";
    std::getline(std::cin,kevinId.adress.country);
    
    std::cout << std::endl;
    std::cout << "\t Display \n";
    
    std::cout << "Name : " << kevinId.user.name << std::endl;
    std::cout << "Firstname : " << kevinId.user.firstname << std::endl;
    std::cout << "Age : " << kevinId.user.age << " y/o" << std::endl;
    std::cout << "Birthday : " << kevinId.birthday.day << " " << kevinId.birthday.month << " " << kevinId.birthday.year << std::endl;
    std::cout << "Reference number : " << kevinId.user.referenceNumber << std::endl;
    std::cout << "Size : " << kevinId.characteristics.size << " m" << std::endl;
    std::cout << "Eye color : " << kevinId.characteristics.eyeColor << std::endl;
    std::cout << "Hair color : " << kevinId.characteristics.hairColor << std::endl;
    
    std::cout << "Adress : " << kevinId.adress.numberOfStreet << " " << kevinId.adress.nameOfStreet << " " << kevinId.adress.zipCode << " " << kevinId.adress.city << " " << kevinId.adress.country << std::endl;
    std::cout << "\n" << std::endl;

    return 0;
    
}
