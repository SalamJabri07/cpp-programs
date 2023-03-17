#include<iostream>

using namespace std;

/*int main()
{
 int wish=3;
 int *genie ;
 genie = & wish;
 cout<<"No, of your wishes= "<<wish<<endl;
 cout<<"Address of your wishes= "<<&wish<<endl;
 cout<<"Address of your wishes genie took using pointer= "<<genie<<endl;
 cout<<"No,of your wishes genie knows= "<<*genie<<endl;
    return 0;
}*/


/* Whatt is pointer?
A pointer is data type that stores the addres of other variable
Initializing =data_type*(int/char/float) variable(new)= &other variable(previous)
&-->Address of operator
*--> dereferencing operator*/
//pointer-->to pointer


int main()
{
 int your_wishes=3;
 int *genie ;
 genie = & your_wishes;
 int **lamp=&genie;
 cout<<"No, of your wishes you wished= "<<your_wishes<<endl;
 cout<<"The place (address) where you wished= "<<&your_wishes<<endl;
 cout<<"Using pointer--> You told genie the address of your wishes= "<<genie<<endl;
 cout<<"No,of your wishes genie knows= "<<*genie<<endl;
 cout<<"Using pointer-->pointer Lamp knows the place where you wish(Address) as genie gets into the lamp= "<<lamp<<endl;
 cout<<"No,of your wishes your lamp knows= "<<**lamp<<endl;

    return 0;
}