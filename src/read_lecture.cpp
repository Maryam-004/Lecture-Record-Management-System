#include <iostream>
#include <fstream>
#include <sstream>
#include "lecture.h"

using namespace std;

void readLectures() {

    ifstream file("LectureRecord.txt");
    string line;

    if(!file) {
        cout << "LectureRecord.txt file not found!\n";
        return;
    }

    cout << "\n----- Lecture Records -----\n";
    while(getline(file, line)) {
        cout << line << endl;
    }
    cout << "----- End -----\n";

    file.close();
}
