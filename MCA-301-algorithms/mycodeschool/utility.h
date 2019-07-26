/*

Header file containing all the utility functions required in sorting.

*/
#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void swap(int *a, int *b) {
	
	int temp = *a;
	 *a = *b;
	 *b = temp;
	
}

void printArray(int A[],int size) {
	
	for(int i = 0; i < size; i++) {
		
		cout<<A[i]<<" ";
		
	}
	
	cout<<endl;
}

//This function creates a dynamic array with random values in it. Returns the pointer to the first element.
int* generateRandomArray(int size, int range){
	
	int *A = new int[size];
	srand(time(NULL));
	
	for(int i = 0; i < size ; i++){
		
		*(A+i) = rand() % range;
	}
	
	return A;
	
}
#endif
