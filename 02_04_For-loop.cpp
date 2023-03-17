#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
int feroz;
/* How for loop works?
for(variable initilize,   condition,   loop termination(pre/post increments))
   <code to run in loop>

variable_type(int/char/float..) either declared in the main function or in variable initialization */
// for (size_t i = 0; i < count; i++)
// {
//     /* code */
// }
for(feroz=0;feroz<=100;feroz++)
{
    cout <<"I'm feroz telling you this for "<<feroz<<" time."<<endl;
}

return 0;
}