#include<iostream>

using namespace std;
/* An Array is collection of similar data typess which are stored in contiguous memory
why we use Array?
If you want to store marks of 100 students where marks=variable which stores integer numbers of students here marks doesn,t change rather the integer number in it
so it is not possible to create 100 variable and allocated there respected marks
thus the reason we need to use Arrays
inisilaizing of array
data_type(int/char/float..) [no of allocations]

data_type(int/char/float..) []={allocations1,allocation2...allocations}*/
int main()

{
    
    
    int marks[20]={96,25,36,0,99,56,25,45,75,66,35,78,54,62,89,25,77,88,22};
    int i=0;
   
    cout<<"The marks of roll no:1 is "<<marks[0]<<endl<<endl;
    //we can use loops to simplyfy problem...

    while(i<=20)
    {
        cout<<"The marks of Roll no:"<<i+80<<" student is "<<marks[i]<<endl<<endl;
        i++;
    }
   
    return 0;
}