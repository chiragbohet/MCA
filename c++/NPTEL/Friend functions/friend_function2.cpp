/*

Book : C++ complete Refrence 3rd Edition
Page No : 300
Topic : Demonstrating use of friend functions

Summary : 
In this program we give example of a scenario where a friend function might be needed.
We have two different classes, each displays a pop up message when error conditions occur.
Other parts of the program may want to know if a pop up message is currently being displayed before writing to the screen so that no message is accidentally overwritten.
To achieve this we can either create two seperate member functions in each of the respective classes which returns a value indicating whether a message is active but this means additional overhead when the conditions is checked (two function calls, not one).
If the condition needs to be checked frequently this overhead may not be acceptable.
So we can use a function which is a friend of both the classes which checks the status of each class.
Thus in this case a friend function allows us to write more efficient code.  

*/

#include <iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; //forward declaration

class C1{
	
	int status; // IDLE if off, INUSE if on screen
	public:
		void set_status(int state);
		friend int idle(C1 a, C2 b);
};

class C2{
	int status; // IDLE if off, INUSE if on screen
	public:
		void set_status(int state);
		friend int idle(C1 a, C2 b);
		
};

void C1::set_status(int state){
	status = state;
}

void C2::set_status(int state){
	status = state;
}

int idle(C1 a, C2 b){
	if(a.status || b.status) return 0;
	else return 1;
}

int main(){
	
	C1 x;
	C2 y;
	
	x.set_status(IDLE);
	y.set_status(IDLE);

	if(idle(x,y)) cout << "Screen can be used. \n";
	else cout<< "In use.\n";
	
	x.set_status(INUSE);
	
	if(idle(x,y)) cout<< "Screen can be used.\n";
	else cout<< "In use.\n";
		
	return 0;
	
}
