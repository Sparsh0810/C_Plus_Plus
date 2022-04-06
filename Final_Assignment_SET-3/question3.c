

#include <iostream>
#include <cstring>

using namespace std;

class charInput            
{
	public:
	    char curr_val;

  //member functions
	void add(char ch)         
	{ 
		curr_val = curr_val + ch;
	}

	string getValue()         
	{ 
		return NULL; 
	}
	
};  //end of parent class



class numInput : public charInput           //child class defination
{ 
	public:
		int curr_val = 0;

    //member functions
		void add(int n)         //overrides add() of parent class to add only integers
		{
		    n = n - '0';
            
			  if(n >= 0 && n <= 9)      //checking for numeric value only	
				  curr_val = curr_val*10 + n;	
		}

		int getValue()      //returns current value 
		{
			return curr_val;
		}
		
};  //end of child class



//main function
int main()
{
	charInput* charIn = new charInput();
	numInput* numIn = new numInput();
	
	//manually giving the values to class variables
	numIn->add('4');
	numIn->add('a');
	numIn->add('V');
	numIn->add('3');
	numIn->add('b');
	numIn->add('6');
	

    //output printing the added value
	cout << numIn->getValue() << endl;
	//the output should be 436
	
	
	return 0;
}
