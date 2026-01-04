#include <iostream>
#include <fstream>
#include <sstream>
#include "lecture.h"

using namespace std;
void addLecture() {

    ofstream file("LectureRecord.txt", ios::app);

    string lectureID, courseID, date, time, block, room, type, reason;
    int lectureNo, choice;

    cout << "\nEnter Lecture ID: ";
    cin >> lectureID;

    cout << "Enter Course ID: ";
    cin >> courseID;

    cout << "Enter Date (dd-mm-yyyy): ";
    cin >> date;

    cout << "Enter Time (hh:mm-hh:mm): ";
    cin >> time;
    cin.ignore();

    cout << "Enter Block: ";
    getline(cin, block);

    cout << "Enter Room No: ";
    getline(cin, room);

    cout << "Enter Lecture Type (Original/Makeup): ";
    cin >> type;

    if(type == "Makeup" || type == "makeup") {
        cout << "\nChoose Makeup Reason:\n";
        cout << "1. Holiday\n";
        cout << "2. Teacher Absent\n";
        cout << "3. Event\n";
        cout << "4. Other\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) reason = "Holiday";
        else if(choice == 2) reason = "TeacherAbsent";
        else if(choice == 3) reason = "Event";
        else reason = "Other";
    } else {
        reason = "-";
    }

    cout << "Enter Lecture Number: ";
    cin >> lectureNo;

    file << lectureID << "," << courseID << "," << date << ","
         << time << "," << block << "," << room << ","
         << type << "," << reason << "," << lectureNo << endl;

    file.close();

    cout << "\nLecture record saved successfully.\n";
}

