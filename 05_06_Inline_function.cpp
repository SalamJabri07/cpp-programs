#include<iostream>

using namespace std;
//inline function is used to replace the function in main rather than copying it 
//Thus time is reduced in main function execution
inline int sum(int a,int b){
return a + b;}
int main()
{
    int a,b;
    cout << "Enter the value of a :"<<endl<<"Enter the value of b :"<<endl;
    cin>>a>>b;
    cout<<"The sum of and b is "<<sum(a,b);
    cout<<"The sum of and b is "<<sum(a,b);
    cout<<"The sum of and b is "<<sum(a,b);
    cout<<"The sum of and b is "<<sum(a,b);
    cout<<"The sum of and b is "<<sum(a,b);
    cout<<"The sum of and b is "<<sum(a,b);
    cout<<"The sum of and b is "<<sum(a,b);
    return 0;
}