#include <iostream>
#include "lecture.h"

using namespace std;

int main() {

    int choice;

    do {
        cout << "\n===== Lecture Management System =====\n";
        cout << "1. Add Lecture Record\n";
        cout << "2. View Lecture Records\n";
        cout << "3. Count Lectures\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
            addLecture();
        else if(choice == 2)
            readLectures();
        else if(choice == 3)
            countLectures();
        else if(choice == 4)
            cout << "Exiting program...\n";
        else
            cout << "Invalid choice! Try again.\n";

    } while(choice != 4);

    return 0;
}
