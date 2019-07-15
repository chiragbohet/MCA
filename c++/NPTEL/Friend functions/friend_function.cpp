/*
Book : C++ complete Refrence 3rd Edition
Page No : 298
Topic : Demonstrating use of friend functions

*/

#include <iostream>
using namespace std;

class myclass{
		private:
	int a,b;
	
	public:
		void set_ab(int , int);
		friend int sum(myclass);
};

void myclass::set_ab(int i, int j){
	
	a = i;
	b = j;
	
}


//sum() is a friend function and has full direct access to the private members of myclass, although it is not a member function of the myclass.

int sum(myclass x){
	
	return x.a + x.b;
	
}


int main(){
	myclass z;
	z.set_ab(5,6);
	cout<<sum(z);	
	
	return 0;
}
//notice that sum() is called without using the dot(.) operator because it is not a member function.
