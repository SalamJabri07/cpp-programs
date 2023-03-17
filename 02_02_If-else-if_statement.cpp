#include<iostream>

using namespace std;

int main()
{
int age;
cout<<"Please, Enter your age: "<<endl;
cin>>age;
if(age<=12)
{
    cout<<"you are treated as a child:"<<endl;
}
else if (age >12 && age<=19)
{
    cout<<"you are just a teen: "<<endl;

}
else if (age>19 && age<60)
{
    cout<<"you are a great citizen of the country"<<endl;
}
else
{
cout<<"You are a retaired citizen";

}

return 0;
}