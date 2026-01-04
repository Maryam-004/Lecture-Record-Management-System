#include <iostream>
#include "lecture.h"

using namespace std;

int main() {

    int choice;

    do {
        cout << "\n========= UNIVERSITY MANAGEMENT SYSTEM =========\n";
        cout << "1. Add Lecture\n";
        cout << "2. View Lectures\n";
        cout << "3. Count Lectures (Course wise)\n";
        cout << "4. Add Course\n";
        cout << "5. View Courses\n";
        cout << "6. Add Teacher\n";
        cout << "7. View Teachers\n";
        cout << "8. Add Student\n";
        cout << "9. View Students\n";
        cout << "0. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addLecture();
                break;

            case 2:
                readLectures();
                break;

            case 3:
                countLectures();
                break;

            case 4:
                course();
                break;

            case 5:
                readcourse();
                break;

            case 6:
                addteacher();
                break;

            case 7:
                readteacher();
                break;

            case 8:
                addstudent();
                break;

            case 9:
                readstudent();
                break;

            case 0:
                cout << "\nExiting program... Thank you!\n";
                break;

            default:
                cout << "\nInvalid choice! Try again.\n";
        }

    } while(choice != 0);

    return 0;
}
