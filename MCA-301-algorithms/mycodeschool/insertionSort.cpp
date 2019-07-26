/*
https://www.youtube.com/watch?v=i-SKeOcBwko
Insertion Sort
TODO - Add comments and documentation
*/
#include "utility.h"

const int arraySize = 10;
const int range = 100;

void insertionSort(int A[], int size ){
	
	int value;
	int hole;
	
	for(int i = 1; i < size; i++) {
		
		value = A[i];
		hole = i; // index
		
		while(hole > 0 && A[hole - 1] > value)
			{
				A[hole] = A[hole-1];
				hole--;
			}
			
		A[hole] = value;		
	}
	
}

int main(){
	
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	insertionSort(A,arraySize);
	printArray(A,arraySize);
	delete[] A;
	return 0;
	
}
