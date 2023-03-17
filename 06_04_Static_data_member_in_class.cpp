#include<iostream>
//When a data member is declared as static , only one copy of the data is maintained for all objects of the class. In the preceding code, the member bytecount is declared in class BufferedOutput , but it must be defined outside the class declaration
using namespace std;
class student
{   private:
    int Id;
   static int count;
    public:
        void setData()
        {  
            cout<<"Enter the student Id"<<endl;
            cin>>Id;
            count++;
        }
        void getData()
        { 
            cout<<"The Id of student is "<<Id<<endl<<" This is student no "<<count<<endl;
        }
};
int student :: count;
int main()
{
    student salam ,feroz, abhilash;
    salam.setData();
    salam.getData();

    feroz.setData();
    feroz.getData();
    
    abhilash.setData();
    abhilash.getData();
    return 0;
}