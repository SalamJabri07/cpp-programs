#include<iostream>
//unions are the better way to store a structures
//When choosing 1 datatype amoung many union is used
using namespace std;
typedef union exchange
{
   int money;
   char currency_letter;
   float exchange;
}cash;
int main()
{
    cash dollar;
    dollar.money =1;
    dollar.currency_letter='$';
    dollar.exchange =72.67;
    cout<<"The dollar in money is : "<<dollar.money<<endl;
    cout<<"The dollar in letter is : "<<dollar.currency_letter<<endl;
    cout<<"The dollar in Indian exchange is : "<<dollar.exchange<<endl;
    //Thus when you run this program only one value will be returned else garbage value
    return 0;
}

