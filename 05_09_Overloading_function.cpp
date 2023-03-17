#include<iostream>
//Function overloading is a feature in C++ where two or more functions can have the same name but different parameters
// overloding-->function having same name but works with different parameters

using namespace std;

// To calculate volume of cylindered
int volume(double r,int h)
{
    return(3.14*r*h);
}

// To calculate volume of cube
int volume(int a)
{
    return(a*a*a);
}

// To calculate volume  of cuboid
int volume(int l,int b ,int h)
{
    return(l*b*h);
}

//To calculate volume of square cube
int square(int a, int b)
{
    return(a*b);
}

int main()
{
    cout<<"The volume of cube of 9 is "<<volume(9)<<endl;
    cout<<"The volume of cuboid of 4, 8, 4  is "<<volume(4,8,4)<<endl;
    cout<<"The volume of cylinder of radius 4 height 8 is "<<volume(4,8)<<endl;
    cout<<"The volume of  sqaure is "<<square(4,8)<<endl;
    return 0;
}