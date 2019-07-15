#include <bits/stdc++.h>
#include "utility.h"

// TODO : there is some issue with the output

using namespace std;

const int arraySize = 10;
const int range = 100;

void maxHeapify(int A[], int rootIndex, int heapsize);
void buildMaxHeap(int A[],int arrayLength);
void heapSort(int A[],int arrayLength);

int main(){
	
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	
	buildMaxHeap(A,arraySize);
	printArray(A,arraySize);
	
	heapSort(A,arraySize);
	printArray(A,arraySize);
	
	delete[] A;
	
	return 0;
}

void maxHeapify(int A[], int rootIndex, int heapsize){
	
	
	int leftChildIndex = (2*rootIndex) + 1;
	int rightChildIndex = (2*rootIndex) + 2;
	
	int largestElementIndex = rootIndex; // by default assuming root to be the largest
	
	if(leftChildIndex <= heapsize && A[leftChildIndex] > A[largestElementIndex]){
		
		largestElementIndex = leftChildIndex;
	}
	if(rightChildIndex <= heapsize && A[rightChildIndex] > A[largestElementIndex])
	{
		largestElementIndex = rightChildIndex;
		
	}
	
	if(largestElementIndex != rootIndex){
		
		swap(A[rootIndex],A[largestElementIndex]);
		maxHeapify(A,largestElementIndex,heapsize);
		
	}
	
	
}


void buildMaxHeap(int A[],int arrayLength){
	
	for(int i = floor(arrayLength/2)-1; i >= 0; i--){
		
		maxHeapify(A,i,arrayLength);
		
	}
	
	
	
}

void heapSort(int A[],int arrayLength){
	
	int heapsize = arrayLength;
	
	for(int i = 0 ; i < arrayLength; i++){
		
		swap(A[0],A[heapsize--]);
		maxHeapify(A,0,heapsize);
		printArray(A,arraySize);
		
	}
	
	
}





