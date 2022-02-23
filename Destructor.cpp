#include<iostream>
using namespace std;
class rectangle
{
 int length, width;
public:
          rectangle()             //Constructor
          { 
          length=0;
          width=0;
          cout<<”Constructor Called”;
          }
          ~rectangle()            //Destructor
          {
          cout<<”Destructor Called”;
          }

};
int main()
{
    rectangle x;               // default constructor is called

  return 0;
}
