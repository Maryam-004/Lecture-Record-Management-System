#include <iostream>
#include <fstream>
#include <sstream>
#include"lecture.h"

using namespace std;
void readcourse()
{ 
    ifstream file("CourseRecord.txt");

    string line;

    if(!file) 
    {
        cout << " CourseRecord.txt file not found!\n";
        return;
    }

     cout << "\n----- Course Records -----\n";
    while(getline(file, line))
    {
        cout << line << endl;
    }
    cout << "----- End -----\n";

    file.close();
}
