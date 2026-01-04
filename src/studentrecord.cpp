#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"lecture.h"
using namespace std;

void addstudent()
{
    ofstream file("StudentRecord.txt",ios::app);

    string studentID;
    string studentname;
    int semester;
    string department;

    int i,n;
    cout<<"enter number of students:";
    cin>>n;
    cin.ignore();

    for(i=0;i<n;i++)
    {
    cout<<"enter student ID:";
    getline(cin,studentID);

    cout<<"enter student name:";
    getline(cin,studentname);
    
    cout<<"enter Semester:";
    cin>>semester;
    cin.ignore();

    cout<<"enter Department:";
    getline(cin,department);

    file<<studentID<<","<<studentname<<","<<semester<<","<<department<<endl;
    }

    cout<<"\nstudent record saved successfully.\n";

    file.close();

}
