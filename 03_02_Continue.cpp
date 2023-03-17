#include<iostream>

using namespace std;
/*The continue statement exit the single statement loop(skips if the loop condion=true) 
next statement is executed*/


int main()
{
int i=1;
for(i; i<=50; i++)
{
    if (i==48 || i==45)
    {
        continue;
    }
cout << "The value of i is :"<<i<<endl;
}
return 0;
}