/*

Book : C++ complete Refrence 3rd Edition
Page No : 301
Topic : A friend of one class may be a member of another. For example, here is the last program rewritten so that idle() is a member of C1:
*/

#include <iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; //forward declaration/refrencing

class C1{
	
	private:
		int status;
	
	public:
		void set_status(int state);
		int idle(C2 b); 	//now a member of C1
		
};

class C2{
	private:
		int status;
	public:
		void set_status(int state);
		friend C1::idle(C2 b);	// friend of C2
};

void C1::set_status(int state){
	
	status = state;
	
}
void C2::set_status(int state){
	
	status = state;
	
}

int C1::idle(C2 b){
	if(status || b.status) return 0;
	else return 1;
}

int main(){
	
	C1 x;
	C2 y;
	
	x.set_status(IDLE);
	y.set_status(IDLE);
	
	/*
	Because idle() is a member of C1 we can directly acess status variable of the objects of type C1 directly hence we only pass objects of type C2 to idle.
	*/
	
	if(x.idle(y)) cout << "Screen can be used.\n";
	else cout << "Screen cannot be used.\n";
	
	x.set_status(INUSE);
	
	if(x.idle(y)) cout << "Screen can be used.\n";
	else cout << "Screen cannot be used.\n";
	
	return 0;
	
}

/*
There are two important restrictions that apply to friend functions. 
-First, a derived class does not inherit friend functions. 
-Second, friend functions may not have a storage-class specifier. That is, they may not be declared as static or extern.


*/

