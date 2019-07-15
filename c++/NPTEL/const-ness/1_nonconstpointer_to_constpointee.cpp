/*
Topic - Const-ness (constants) in C++
Youtube link - https://www.youtube.com/watch?v=Lxg-Qkr6YkE
*/
#include <iostream>
using namespace std;

int main(){
	
	int m = 4;
	const int n = 5; 		//Creating a constant variable n initialized to 5.
	const int *p = &n;		// non const pointer(p) to a const pointee(n)
	//here 'const' is placed before int, this essentially means that the pointer points to a constant of int type.(The pointer itself is not constant) 
	
	
	// n = 6;		     	// Error : Since n is a constant, its value cannot be changed.
	//*p = 7;				//Error : p points to a constant data that cannot be changed.
	
	p = &m;					//OKAY : since p itself is not constant.
	
   //*p = 8;					//Error : p thinks that it points to a constant data (whereas it is not) so it does not allow *p operation.
	
	return 0;
}
