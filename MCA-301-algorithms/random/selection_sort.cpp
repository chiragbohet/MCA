#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

const int MAXSIZE = 100;
const int RANGE = MAXSIZE;

void swap(int* a, int* b){
	
	int * temp = a;
       		 a = b;
			 b = temp;
			
}

int* createRandomArray(int SIZE){
	
	//creating an array 
	int *A = new int[SIZE];
	
	//inserting random elements in the array
	srand(time(NULL));
	for(int i = 0;i<SIZE;i++){A[i] = rand() % RANGE;}
	
	//returning the base address of the array
	return A;
} 

void printArray(int A[], int SIZE){for(int i = 0; i < SIZE; i++){cout<< *(A+i)<<endl;}}

int* selectionSort(int A[]){
	
	//TODO get value of array size
	
	for(int i = 0;i <  MAXSIZE;i++){
		
		
		
	}
	
	
}



int main(){
	
	int *A;
	A = createRandomArray(MAXSIZE);
	printArray(A, MAXSIZE);
	
	return 0;
}
