#include<iostream>

using namespace std;
//static function is a function whose value fixed/stational
//static function is called only ones
//The next value of static argument is retained by previous one

int sum(int a,int b)
{ static int c = 0;
    c=c+1;
return a + b +c;}
int main()
{
    int a,b;
    cout << "Enter the value of a :"<<endl<<"Enter the value of b :"<<endl;
    cin>>a>>b;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    cout<<"The sum of and b is "<<sum(a,b)<<endl;
    for (int i = 0; i <30; i++)
    {
            cout<<"The sum of and b is "<<sum(a,b)<<endl;

    }
    
    return 0;
}