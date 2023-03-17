#include<iostream>
// functions are used to break the program into segments
//function_prototypes are used to declare the function can be present at any part of the program
//declaration---> datatype function_name (arguments);
using namespace std;
int multiply(int a, int b,int c);

void salam(void);

    int multiply(int a, int b,int c){
    
        int multi=a*b*c;
        return multi;}
    
int main()
{
    int n1,n2,n3;
    cout << "Enter the first number to multiply"<<endl;
    cin>>n1;
    cout << "Enter the second number to multiply"<<endl;
    cin>>n2;
    cout << "Enter the third number to multiply"<<endl;
    cin>>n3;

    cout<<"The sum of the numbers is : "<<multiply(n1,n2,n3)<<endl;
    salam();
    

    return 0;
}
    void salam(){
    cout<<"THE PROGRAM IS TERMINATED";
    }
