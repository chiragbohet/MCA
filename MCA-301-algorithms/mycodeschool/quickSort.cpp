//TODO Documentation and comments
#include "utility.h"

const int range = 100;
const int arraySize = 13;

int partition(int *A,int start, int end){
	
	int pIndex = start;
	int pivot = A[end];
	
	for(int i = start; i < end; i++){
		
		if(A[i] <= pivot) 
			swap(A[i],A[pIndex++]);
		
	}
	swap(A[pIndex],A[end]);
	return pIndex;
}

void quickSort(int *A, int start, int end){
	
	int pIndex;
	
	if(start < end){
		
		pIndex = partition(A,start,end);
		quickSort(A,start,pIndex - 1);
		quickSort(A,pIndex+1,end);	
		
		}	
	
}


int main(){
	
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	quickSort(A,0,arraySize-1);
	printArray(A,arraySize);
	delete[] A;
	return 0;
	
}
