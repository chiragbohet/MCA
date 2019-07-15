/*

Book : C++ complete Refrence 3rd Edition
Page No : 301
Topic : Friend Classes

When a class is a friend of another class, the friend class and all of its member functions have access to private members defined within the other class.
*/
#include <iostream>
using namespace std;

class TwoValues{
	
	private:
		int a;
		int b;
	public:
		TwoValues(int i, int j){ a = i; b = j; } 
		friend class Min;
};		

class Min{
	public:
		int min(TwoValues x);
};

int Min::min(TwoValues x){
	
	return x.a < x.b ? x.a : x.b;
	
}

int main(){
	TwoValues ob(10,20);
	Min m;
	
	cout<< m.min(ob);
	
	return 0;
}

/*

Min has access to private variables a and b declared within TwoValues class.
Points to Note - 
1) A friend class only has access to names defined within the other class. It does not inherit the other class. Specifically, the members of the first class do not become the members of the friend class.

Friend classes are seldom used. They are supported to allow certain special case situations to be handled.
*/
