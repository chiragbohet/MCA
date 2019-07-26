/*
Implementing linear search
*/

#include <iostream>
#include <cstdlib>
using namespace std;

const int MAXSIZE = 30; //Maximum size of Array / Count of Randomly generated numbers.
const int RANGE = 100; // Range from 1 to ?
int search = 7;	//The number to find.

int main(){
	
	//declaring a array A
	int A[MAXSIZE];
	int comparisons = 0; //comparisons required to search the given number
	
	//Inserting random numbers
	for(int i = 1;i<=MAXSIZE;i++){ A[i] = rand() % RANGE; }
	
	//printing 
	for(int i = 1;i<=MAXSIZE;i++){ cout<<A[i]<<endl; }
	
	
	//Searching 
	for(int i = 1;i<=MAXSIZE;i++){
		
		comparisons++;
		
		if(A[i] == search){
		cout<<"Found at " << i<<"th position."<<endl;
		break;	
		}
		
		
	}
	cout<<"Total Comparisons = "<<comparisons;
	return 0;
}
