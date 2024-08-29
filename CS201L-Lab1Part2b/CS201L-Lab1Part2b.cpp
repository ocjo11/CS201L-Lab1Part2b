// CS201L_lab_part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//NAME: 
//DATE:
//Lab1 - Part 2
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Define values
    int x1, y1, x2, y2;
    float dist1, dist2;
    char userChoice = 'Y';
    char userChoice2 = 'Y';
    srand(time(0));

    // While loop for user choice
    while (userChoice == 'Y') {
        cout << "Do you want to enter your own numbers? Y or N ";
        cin >> userChoice2;
        userChoice2 = toupper(userChoice2);

        // If user wants to enter their own numbers
        if (userChoice2 == 'Y') {
            cout << "Please enter x & y coordinates (int) for point 1: ";
            cin >> x1 >> y1;

            // Verifys input for point 1
            while ((x1 < -10 || x1 > 10) or (y1 < -10 || y1 > 10)) {
                cout << "inavlid input, please try again ";
                cin >> x1 >> y1;
            }

            cout << "Please enter x & y coordinates (int) for point 2: ";
            cin >> x2 >> y2;

            // Verifys input for point 2
            while ((x2 < -10 || x2 > 10) or (y2 < -10 || y2 > 10)) {
                cout << "inavlid input, please try again ";
                cin >> x2 >> y2;
            }
        }
        else {
            x1 = rand() % 21 - 10;
            y1 = rand() % 21 - 10;
            x2 = rand() % 21 - 10;
            y2 = rand() % 21 - 10;
        }

        // Distance formula and displays output to two decimal places
        dist1 = pow(pow(x1, 2) + pow(y1, 2), .5);
        cout << "Distance to origin for point 1: ("
            << fixed << setprecision(2) << x1 << ", " << y1 << ") is: "
            << dist1 << endl;

        dist2 = pow(pow(x2, 2) + pow(y2, 2), .5);
        cout << "Distance to origin for point 2: ("
            << x2 << ", " << y2 << ") is: "
            << dist2 << endl;

        //Determines which point is closer to origin
        if (dist1 < dist2) {
            cout << "Point 1 is closer to the origin " << dist1 << endl;
        }
        else {
            cout << "Point 2 is closer to the origin " << dist2 << endl;
        }

        //Prompts user if they want to run program again
        cout << "Go again? Y or N: ";
        cin >> userChoice;
        userChoice = toupper(userChoice);
        cout << endl;
    }

    return 0;

}