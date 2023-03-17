#include<iostream>

using namespace std;
int swap(int & x, int &  y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
    return(x,y);
}
/* int swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    
}*/
int main()
{ 
    int a, b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    cout<<endl<<"The value of a before swap is : "<<a<<endl;
    cout<<"The value of b before swap is : "<<b<<endl;

   // calling a function to swap the values by de reference
    swap(a,b);
    cout<<endl<<"The value of a after swap is : "<<a<<endl;
    cout<<"The value of b after swap is : "<<b<<endl;   

    
    return 0;
}