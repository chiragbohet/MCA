/*
Topic - Const-ness (constants) in C++
Youtube link - https://www.youtube.com/watch?v=Lxg-Qkr6YkE
*/
#include <iostream>
using namespace std;

int main(){

	const int m = 4;
	const int n = 5;
	
	const int * const p = &n; // const pointer(p) to a const pointee(n).
	
	//n = 6;	//Error: n is constant
	//*p = 7;	//Error: p is pointing to a constant, hence it will not allow *p operation.
	//p = &m;	//Error: p itself is a pointer, hence cannot be manipulated.
		
	return 0;
}
