#include<iostream>

using namespace std;
//Type casting is the process of converting the one datatype(int)-->other_datatype(float)
//Reference variable used to call the variable using another name
int main()
{
int a, b;
int & salam=a;
cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;
cout<<"The value of a + b is: "<<salam+b<<endl;
cout<<"The value of a - b is: "<<salam-b<<endl;
cout<<"The value of a * b is: "<<a*b<<endl;
cout<<"The value of a / b is: "<<float(a/b)<<endl;
cout<<"The value of a % b is: "<<(a % b)<<endl;

return 0;
}