#include <iostream>
#include <fstream>
#include <sstream>
#include "lecture.h"

using namespace std;
void countLectures() {

    ifstream file("LectureRecord.txt");
    string line;

    if(!file) {
        cout << "LectureRecord.txt file not found!\n";
        return;
    }

    int totalLectures;
    cout << "Enter total lectures required in semester: ";
    cin >> totalLectures;

    string courseToCount;
    cout << "Enter Course ID: ";
    cin >> courseToCount;

    int subjectCount = 0;

    while(getline(file, line)) {
        stringstream ss(line);
        string lectureID, courseID;

        getline(ss, lectureID, ',');
        getline(ss, courseID, ',');

        if(courseID == courseToCount) {
            subjectCount++;
        }
    }

    int remaining = totalLectures - subjectCount;

    cout << "\nLectures conducted for " << courseToCount << ": "
         << subjectCount << endl;
    cout << "Remaining lectures: " << remaining << endl;

    file.close();
}
