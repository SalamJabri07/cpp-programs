#include <iostream>

using namespace std;
void swap(int x, int y) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
} 
 
int main () {
   // local variable declaration:
   int a;
   int b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
   cout<<endl << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
 
   // calling a function to swap the values.
   swap(a, b);
 
   cout<<endl << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}