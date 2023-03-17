#include<iostream>

using namespace std;
class complex
{  private :
    int a, b;
    public:

    void setNumber(int A1,int A2 )
    {
        a = A1;
        b = A2;
    }
    friend complex sum(complex c1, complex c2);
    void display(void)
    {
        cout<<"You have entered the number"<< a <<" + "<< b<<"i"<< endl;
    }
};
complex sum(complex awad, complex eesa)
{
    complex umar;
    umar.setNumber((awad.a +awad.a),(eesa.b +eesa.b) );
    return umar;

}
int main()
{
    complex c1,c2,add;
    c1.setNumber(5,7);
    c1.display();
    c2.setNumber(8,9);
    c2.display();
    add= sum(c1,c2);

    
    return 0;
}