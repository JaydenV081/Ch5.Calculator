/*
Calculator Program
Create a menu driven program that allows the user to select what arithmetic operation they with to perform.
-- display menu
-- get users choice
-- get two numbers from the user
-- code for different operations (including modulo and exponents)
-- display result
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main () {

    int choice;
    double num1, num2;
    double result = 1;

    bool repeat = true;

    do {
        cout << "Enter a digit corresponding to the operation: " << endl;
        cout << "1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Modulo \n6. Power \n7. (Exit Code)" << endl;

        cin >> choice;

        switch (choice) {
            case 1: cout << "Addition" << endl;
                cout << "Please enter two numbers with space between" << endl;
                cin >> num1 >> num2;
                result = num1 + num2;
                break;
            case 2: cout << "Subtraction" << endl;
                cout << "Please enter two numbers with space between" << endl;
                cin >> num1 >> num2;
                result = num1 - num2;
                break;
            case 3: cout << "Multiplication" << endl;
                cout << "Please enter two numbers with space between" << endl;
                cin >> num1 >> num2;
                result = num1 * num2;
                break;
            case 4: cout << "Division" << endl;
                cout << "Please enter two numbers with space between" << endl;
                cin >> num1 >> num2;
                result = num1 / num2;
                break;
            case 5: cout << "Modulo" << endl;
                cout << "Please enter two numbers with space between" << endl;
                cin >> num1 >> num2;
                result = static_cast<int>(num1) % static_cast<int>(num2);
                break;
            case 6: cout << "Power" << endl;
                cout << "Please enter two numbers with space between" << endl;
                cin >> num1 >> num2;
                for (int count = 0; count < num2; count++) {
                    result *= num1;
                }
                break;
            case 7: cout << "Exiting program";
                return 0;
            default: cout << "Please a enter a valid choice";
                break;
        }
        cout << "The answer to your function is " << result << endl;
        cout << "----------------------" << endl;
    } while (repeat);

    return 0;
}