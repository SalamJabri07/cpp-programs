#include<iostream>
//A recursive function is a function that calls itself during its execution. The process may repeat several times, outputting the result and the end of each iteration
using namespace std;
int factorial(int a){
    if (a ==1 ){
        return 1;
    }
    return a* factorial(a-1);
}
int main()
{
    int a;
    cout<<"Enter the number to know it's Factorial";
    cin>>a;
    cout<<"The factorial of "<<a<<"! is "<<factorial(a);

    return 0;
}