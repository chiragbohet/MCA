/*
Topic - Const-ness (constants) in C++
Youtube link - https://www.youtube.com/watch?v=Lxg-Qkr6YkE
*/

#include <iostream>
using namespace std;

int main(){
	int m = 5;
	const int n = 5;
	// n = 6; 			//Error : Compilation error since n is a constant.
	
	int *p =0;
	// p = &n;			// Error : since *p can be used to change value on n (Violation of const-ness) 
	
	// const int n;		//Error: Value of a const variable must be initialized when defined.
	
	
	return 0;
}

/*
Advantages/uses of constants 

1. Natural constants like pie, epsilon, golden ratio can be compactly defined and used.
	Ex. 
		const double pi = 4.0 * atan(1.0);
		const int TRUTH = 1;
		const int FALSE = 0;
		
2. Program constants like number of elements, array size etc. can be defined at one place and used all over the program.
	Ex. 
		const int nArraySize = 100;
		const int nElements = 10;		

*/
