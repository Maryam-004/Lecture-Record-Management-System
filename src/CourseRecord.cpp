#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "lecture.h"
using namespace std;

void course() {

    ofstream file("Course.txt", ios::app);

    string courseID;
    string courseCode;
    string courseName;
    string teacherName;
    string semester;
    string department;
    int totalLectures;
    int n;
    cout<<"How many courses do you want to enter?";
    cin>>n;
    cin.ignore();
    for(int i=1;i<n;i++){
        cout<<"\n---Enter Course"<<i<<"Details---\n";

    cout << "Enter Course ID: ";
    cin >> courseID;
    cin.ignore();

    cout << "Enter Course Code: ";
    getline(cin, courseCode);

    cout << "Enter Course Name: ";
    getline(cin, courseName);

    cout << "Enter Teacher Name: ";
    getline(cin, teacherName);

    cout << "Enter Semester: ";
    getline(cin, semester);

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter Total Lectures: ";
    cin >> totalLectures;

    file << courseID << "," << courseCode << "," << courseName << ","
         << teacherName << "," << semester << "," << department << ","
         << totalLectures << endl;
    }

    cout << "\nCourse record saved successfully.\n";
    file.close();

}