#include<iostream>
// A class is a template to create an object that
// A object is a function derived from class template class
using namespace std;
class Employee
{
    private:
      int a,  b,  c  ;
    public:
      int d, e;
     void setData(int a,int b,int c);
     void getData()
     {
         cout << "The value of a is "<<a<<endl;
         cout << "The value of b is "<<b<<endl;
         cout << "The value of c is "<<c<<endl;
         cout << "The value of d is "<<d<<endl;
         cout << "The value of e is "<<e<<endl;
     }
     };
      void Employee :: setData(int a1, int b1, int c1)
     {
         a=a1;
         b=b1;
         c=c1;

     };
      

int main()
{
    Employee feroz;
    feroz.d=96;
    feroz.e=104;


    feroz.setData(2,6,3);
    feroz.getData();

    return 0;
}