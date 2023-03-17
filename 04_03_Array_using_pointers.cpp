#include<iostream>

using namespace std;

int main()
{
    int marks[19]={96,25,36,0,99,56,25,45,75,66,35,78,54,62,89,25,77,88,22};
    int *show = marks;
   for (int i = 0; i <19; i++)
   {
      cout <<*show <<" is storred at:\t"<<show<<endl;
         show++;
   }
   
    return 0;
}