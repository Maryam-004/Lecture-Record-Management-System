#include <iostream>
#include <fstream>
#include <sstream>
#include"lecture.h"

using namespace std;
void readteacher()
{
     ifstream file("TeacherRecord.txt");
    string line;

    if(!file) 
    {
        cout << " TeacherRecord.txt file not found!\n";
        return;
    }

     cout << "\n----- Teacher Records -----\n";
    while(getline(file, line))
    {
        cout << line << endl;
    }
    cout << "----- End -----\n";

    file.close();
}
