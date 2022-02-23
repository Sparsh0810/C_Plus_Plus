#include<iostream>
using namespace std;
class demo
{
int m,n;
public:
          demo(int x,int y)                        //Parameterized Constructor   
          {                             
          n=y;
          cout<<“Constructor Called“;
          }
};

int main()
{
  demo d1(5,6);
  
  return 0;
}
