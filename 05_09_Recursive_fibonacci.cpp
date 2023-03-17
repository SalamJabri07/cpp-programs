#include<iostream>
//A recursive function is a function that calls itself during its execution. The process may repeat several times, outputting the result and the end of each iteration
using namespace std;
int fibonacci(int a){
    if (a<3 ){
        return 1;
    }
    return fibonacci(a-2)+fibonacci(a-1);
}
int main()
{
    int a;
    cout<<"Enter the nth number of fibonacci =";
    cin>>a;
    cout<<"The value of number at "<<a<<" fibonacci is "<<fibonacci(a);

    return 0;
}