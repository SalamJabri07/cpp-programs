#include<iostream>
#include<string>
//Nesting is a process of rolling ie(runing one class function in other)
//Without calling the nesting function
using namespace std;
 class Binary
{ 
    private:
    string s;
    public:
        void read_binary(void);
        void check_binary(void);
        void ones_compliment(void);
        void display(void);

};


void Binary :: read_binary(void)
{
    cout<<"Enter the Binary number "<<endl;
    cin >> s;
}


void Binary :: check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"THIS BINARY FORMAT IS INCORRECT"<<endl;
            exit(0);
        }
        
    }
    
}

void Binary :: ones_compliment(void)
{  
   void check_binary(void); //Thus we have nested the binary function in ones complement and thus we dont need to call the function's object in the main memery.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) ='0';
        }
        
    }
    
}

void Binary :: display(void)
{
    cout<<"Displaying the Binary number"<<endl;
    // for (int i = 0; i < s.length(); i++)
    // {
    // cout<<s.at(i);
    // }
    // cout<<endl;
    cout <<s<<endl;
}

int main()
{
    Binary baris;
    baris.read_binary();
    baris.display();
    // baris.check_binary();
    baris.ones_compliment();
    baris.display();


    return 0;
}
