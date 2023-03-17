#include<iostream>

using namespace std;
/*The Break statement terminate the loop in the following way by breaking the loop if the 
statement becomes true */


int main()
{
int i=1;
while (i<=20)
{
 if (i==15)
    {
        break;
    }
  else
  {
      cout<<"The value of i is "<<i<<endl;
    i++;
  }
  

}
        
    return 0;
}