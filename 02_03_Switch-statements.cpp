#include<iostream>

using namespace std;

int main()
{
    int std;
    cout<<"HELLO! please provide your school class to know your age:\n";
    cin>>std;
    if (std<1)
    {
        cout<<"you are kinder garden student";
    }
    else
    {
    
    switch (std)
    {
    case 10:
        printf("your age is is 15 or 16");
        break;
    case 9:
        printf("Your age is 15");
        break;
    case 8:
        printf("Your age is 14");
        break;
    case 7:
        printf("Your age is 13");
        break;
    case 6:
        printf("Your age is 12");
        break;
    case 5:
        printf("Your age is 11");
        break;
    case 4:
        printf("Your age is 10");
        break;
    case 3:
        printf("Your age is 09");
        break;
    case 2:
        printf("Your age is 08");
        break;
    case 1:
        printf("Your age is 07");
        break;
        
     
    default:
        printf("Error out of data base entry try to contact your school!");
        break;
    }
    }
}