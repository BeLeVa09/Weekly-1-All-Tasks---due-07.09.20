#include <iostream>
#include <string>
#include <conio.h>

int task;
std::string name = "";
std::string dob = "";
int age;
long phone;
std::string answer = "";
int choice;
std::string sSource = name;
int coffee = 1;
int tea = 2;
int cola = 3;

int main()
{
    Overview:
    
    // Choose which task to see

    std::cout << "Which task would you like to see?\n";
    std::cout << "(1, 2, 3, 4 or 5)\n";
    std::cin >> task;

    if (task == 1) {
        system("cls");
        goto Task1;
    }
    else if (task == 2) {
        system("cls");
        goto Task2;
    }
    else if (task == 3) {
        system("cls");
        goto Task3;
    }
    else if (task == 4) {
        system("cls");
        goto Task4;
    }
    else if (task == 5) {
        system("cls");
        goto Task5;
    }
    else {
        system("cls");
        goto Overview;
    }

//---------------------------------------------------------------------------------------------

Task1:

    // Get information
    std::cout << "Hello there, please write your name\n";
    std::cin >> name;
    std::cout << "\nHi, " << name << ". How old are you?\n";
    std::cin >> age;
    std::cout << "\nOkay.\nNow, what's your phone number?\n";
    std::cin >> phone;
    std::cout << "\nRight.\nLastly, I'll need your date of birth (dd/mm/yyyy)\n";
    std::cin >> dob;

    /*
    std::string sSource = name;           This is the method I used to find the users initial
    std::cout << sSource[0] << "\n";      I found this method on learncpp.com chapter 17.4
    */

    // Print information
    std::cout << "\n-------------------------\n";
    std::cout << " | Name     | " << name << "\n";
    std::cout << " | Initial  | " << sSource[0] << "\n";
    std::cout << " | Age      | " << age << "\n";
    std::cout << " | Phone nr | " << phone << "\n";
    std::cout << " | Birthday | " << dob << "\n";
    std::cout << "-------------------------\n";

    _getch();
    system("cls");
    goto End;

//---------------------------------------------------------------------------------------------

Task2:

    // Getting information
    std::cout << "Hello, what is your name?\n";
    std::cin >> name;
    std::cout << "\nOkay " << name << ", how old are you?\n";
    std::cin >> age;
    std::cout << "\nNow for the most important question of all...\n";
    _getch();
    std::cout << "Do you drink coffee?\n";
    std::cin >> answer;



    // Printing information
    std::cout << "\nYour name is " << name << "\n";
    std::cout << "You are " << age << " years old\n";
    if (answer == "y" || answer == "yes" || answer == "Yes") {
        std::cout << "Seems you like coffee\n";
    }
    else if (answer == "n" || answer == "no" || answer == "No") {
        std::cout << "Oh, you don't like coffee\n";
    }

    _getch();
    system("cls");
    goto End;

//---------------------------------------------------------------------------------------------

Task3:

    std::cout << "Hello, how old are you?\n";
    std::cin >> age;

    if (age < 20) {
        std::cout << "\nYou are young\n";
    }
    else if (age >= 20 && age <= 40) {
        std::cout << "\nYou are a grown up\n";
    }
    else if (age > 40) {
        std::cout << "\nYou are really old\n";
    }

    _getch();
    system("cls");
    goto End;

//---------------------------------------------------------------------------------------------

Task4:

    std::cout << "What is your favourite drink?\n";
    std::cout << "1. Coffee\n";
    std::cout << "2. Tea\n";
    std::cout << "3. Coca Cola\n";
    std::cout << "(Answer with 1-3)\n";
    std::cin >> choice;

    if (choice == coffee) {
        std::cout << "\nCoffee is delicious\n";
    }
    else if (choice == tea) {
        std::cout << "\nTea gives peace of mind\n";
    }
    else if (choice == cola) {
        std::cout << "\nCoke will give you a white smile\n";
    }
    else {
        system("cls");      // Incorrect inputs repeat the question
        goto Task4;
    }

    _getch();
    system("cls");
    goto End;

//---------------------------------------------------------------------------------------------

Task5:

    std::cout << "     1   2   3   4   5   6\n";
    std::cout << "    --- --- --- --- --- ---\n";
    std::cout << " A | * | * | * | * | * | * | A\n";
    std::cout << "    --- --- --- --- --- ---\n";
    std::cout << " B | * | * | * | * | * | * | B\n";
    std::cout << "    --- --- --- --- --- ---\n";
    std::cout << " C | * | * | * | * | * | * | C\n";
    std::cout << "    --- --- --- --- --- ---\n";
    std::cout << " D | * | * | * | * | * | * | D\n";
    std::cout << "    --- --- --- --- --- ---\n";
    std::cout << "     1   2   3   4   5   6\n";

    _getch();
    system("cls");
    goto End;

//---------------------------------------------------------------------------------------------

End:

    std::cout << "Would you like to see another task?\n";
    std::cout << "1. Yes\n";
    std::cout << "2. No\n";
    std::cin >> choice;

    if (choice == 1) {
        system("cls");
        goto Overview;
    }
    else {
        exit;
    }
}