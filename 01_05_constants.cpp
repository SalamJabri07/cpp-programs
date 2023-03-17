#include<iostream>

using namespace std;
// The constant keyword is used to fix unchangable value in the variable declaration
int  main()
{
int a, b ;
a=34;
b=91;
int const c = 96;
cout<<"The value of a before change is "<<a<<endl;
cout<<"The value of b before change is "<<b<<endl;
cout<<"The value of c before change is "<<c<<endl;
a=55;
b=52;
//c=98;--> thus you can't change the value of const once const key word is defined
cout<<"The value of a after the change is "<<a<<endl;
cout<<"The value of b after the change is "<<b<<endl;
cout<<"The value of c after the change is "<<c<<endl;
return 0;
}