// Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File name: Students
Programmer: Olivia Ruiz
Date: 4/4/25
Requirents: Ask her students to line up according to their first name 
Program should be written that asks to enter the number of students, then reports
what student is in the front and which student is at the end. 
*/

#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int main() {
    int numStudents;

    
    do {
        cout << "Enter the number of students (1-25): ";
        cin >> numStudents;
        if (numStudents < 1 || numStudents > 25) {
            cout << "Please enter a number between 1 and 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    vector<string> studentNames(numStudents);

 \
    cout << "Enter the names of the students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> studentNames[i];
    }

   
    sort(studentNames.begin(), studentNames.end());

   
    cout << "\nThe student at the front of the line (alphabetically) is: " << studentNames[0] << endl;
    cout << "The student at the end of the line (alphabetically) is: " << studentNames[numStudents - 1] << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
