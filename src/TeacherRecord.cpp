#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "lecture.h"
using namespace std;

void addteacher() {

    ofstream file("Teacher.txt", ios::app);

    string teacherID;
    string teacherName;
    string department;
    int n;
    cout << "How many teachers do you want to enter? ";
    cin >> n;
    cin.ignore();

    for (int i = 1; i < n; i++) {
cout << "\n--- Enter Teacher " << i << " Details ---\n";
    
    cout << "Enter Teacher ID: ";
    cin >> teacherID;
    cin.ignore();

    cout << "Enter Teacher Name: ";
    getline(cin, teacherName);

    cout << "Enter Department: ";
    getline(cin, department);

    file << teacherID << "," << teacherName << "," << department << endl;
    }

    cout << "\nTeacher record saved successfully.\n";
    file.close();

}
