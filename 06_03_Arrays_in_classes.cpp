#include<iostream>

using namespace std;
class library
{
    private:
    int book_code[20];
    int book_price[20];
    int increment=0;
    public:
    // void initial_increment(void){
    //     increment =0;
    // }
    void get_price(void);
    void display_price(void);
};
void library :: get_price(void)
{
    cout<<"Enter the Book Id code "<<endl;
    cin>>book_code[increment];
    cout<<"Enter the price of that Book "<<endl;
    cin>>book_price[increment];
    increment++;
}

void library :: display_price(void)
  
{ 
    library:: get_price();
    // void get_price(vooi);

    for (int i = 0; i < increment; i++)
    {
    cout<<"The price for Book id "<<book_code[i]<< " is " <<book_price[i]<<endl;
    }
    
    
}
int main()
{
    library chaitanya;
    // chaitanya.get_price();
    // chaitanya.display_price();
     for (int i = 0; i <5; i++)
    {
        cout<<"CUrrent iteration: "<<i<<endl;
        chaitanya.display_price();
    }
    
    return 0;
}