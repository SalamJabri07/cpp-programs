#include<iostream>
// Structures are collections of dis-similar datatypes under one fuction
//typedef used to change the recall name of stuctures
using namespace std;
typedef struct student
{
    int s_id;
    char s_section;
    float percent;
}student;


int main()
{
student afra;
afra.s_id=596;
afra.s_section='B';
afra.percent=97.6;
cout<<"The student's ID is :"<<afra.s_id<<endl; 
cout<<"The student's section is :"<<afra.s_section<<endl; 
cout<<"The student's percntage is :"<<afra.percent<<endl;
    
    return 0;
}