#include <iostream>
#include <fstream>
#include <sstream>
#include"lecture.h"

using namespace std;
void readstudent()
{
     ifstream file("StudentRecord.txt");
    string line;

    if(!file) 
    {
        cout << " StudentRecord.txt file not found!\n";
        return;
    }

     cout << "\n----- Student Records -----\n";
    while(getline(file, line))
    {
        cout << line << endl;
    }
    cout << "----- End -----\n";

    file.close();
}
