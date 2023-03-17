#include <iostream>
using namespace std;
// A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::. A static member function can only access static data member, other static member functions and any other functions from outside the clas
class student
{
private:
    int Id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the student Id" << endl;
        cin >> Id;
        count++;
    }
    void getData()
    {
        cout << "The Id of student is " << Id << endl;
            //  << " This is student no " << count << endl;
    }
    static void getCount()
    {
        cout << "The count is " << count << endl;
    }
};
int student ::count;
int main()
{
    student salam, feroz, abhilash;
    salam.setData();
    salam.getData();
    student::getCount();

    feroz.setData();
    feroz.getData();
    student::getCount();

    abhilash.setData();
    abhilash.getData();
    student::getCount();

    return 0;
}