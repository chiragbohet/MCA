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
	char choice;
	int a,b;
	do{
         cout<<"Enter two Numbers : ";		
	 cin>>a>>b;	
	cout<<"\nOutput from Iterative : "<<GCDIterative(a,b)<<endl;	
	cout<<"Output from Recursive : "<<GCDRecursive(a,b)<<endl;
	cout<<"Wanna Try again!!! (y/n) : ";
	cin>>choice;	
	}while(choice=='y'||choice=='Y');
	
	return 0;
}
