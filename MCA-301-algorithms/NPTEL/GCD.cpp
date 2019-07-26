/*
Calculating GCD using Euclid's algorithm
https://www.youtube.com/watch?time_continue=8&v=5Y8Lfsreeck
*/
#include <iostream>
using namespace std;

int GCDIterative(int a, int b){
	
	int r = 0 ;
	 
	while( a % b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	
	return b;
}


int GCDRecursive(int a, int b){
	if(a % b == 0){
	
		return b;
	
	}
		return GCDRecursive(b,a%b);
	
}


int main(){
	
	cout<<GCDIterative(434,966);
	cout<<GCDRecursive(434,966);
	
	return 0;
}
