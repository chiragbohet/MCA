/*
Implementing linear search
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

//const int MAXSIZE = 30; //Maximum size of Array / Count of Randomly generated numbers.
const int RANGE = 100; // Range from 1 to ?
//int search = 7;	//The number to find.

int main(){
	
	//declaring a array A
	//int A[MAXSIZE];
	int search = 0 , MAXSIZE;
	bool found = false;
	cout<<"Enter Array size : ";
	cin>>MAXSIZE;
    cout<<"Enter Key : ";
    cin>>search;
	
	vector<int> A(MAXSIZE);
	int comparisons = 0; //comparisons required to search the given number
	
	//Inserting random numbers
	for(int i = 0;i<MAXSIZE;i++){ A[i] = rand() % RANGE; }
	
	//printing 
	for(int i = 0;i<MAXSIZE;i++){ cout<<A[i]<<" "; }
	
	
	//Searching 
	for(int i = 0;i<MAXSIZE;i++){
		
		comparisons++;
		
		if(A[i] == search){
		cout<<"Found at " << i+1<<"th position."<<endl;
		found = true;	
		break;	
		}
		
		
	}
	if(!found)
		cout<<"\nCould Not find key \n ";
	
    cout<<"Total Comparisons = "<<comparisons;
	return 0;
}
