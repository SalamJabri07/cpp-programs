#include<iostream>

using namespace std;

int main()
{
    int num=1,table;

cout<<"Enter the table that you wanted to print"<<endl;
cin >>table;
do
{
    cout<<table<<" X "<<num<<" = " <<table*num<<endl;
    num++;

}
while(num<=100);
return 0;
}