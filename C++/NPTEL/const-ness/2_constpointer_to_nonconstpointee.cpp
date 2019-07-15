/*
Topic - Const-ness (constants) in C++
Youtube link - https://www.youtube.com/watch?v=Lxg-Qkr6YkE
*/

#include <iostream>
using namespace std;

int main(){
	
	int m = 4;
	int n = 5;
	
	int * const p  = &n; // const pointer (p) to a non const data(n)
	//here 'const' is placed after int rather than before like in the last case. This essentially means that the pointer is constant the data it is pointing to may or may not be constant.
	n = 6;				// OKAY
	*p = 7;				// OKAY
	//p = &m;			//Error: Since p is a constant pointer, it cannot point to a new data/pointer itself is constant.
	
	return 0;
}
