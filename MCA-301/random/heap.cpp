#include <math.h>
#include "utility.h"

const int range = 10;
const int arraySize = 8;

void maxHeapify(int A[],int heapsize,int root){
	
	int leftChild = (root*2) + 1;
	int rightChild = (root*2) + 2;
	int largest;
	
	if(leftChild <= heapsize && A[leftChild] > A[root])
		largest = leftChild;
	else
		largest = root;
		
	if(rightChild <= heapsize && A[rightChild] > A[largest])
		largest = rightChild;
	
	if(largest != root){	
		swap(A[root],A[largest]);
		maxHeapify(A,heapsize,largest);
	}
		
}

void buildMaxHeap(int A[],int size){
	
	for(int i = floor(size/2);i >=0 ; i--)
		maxHeapify(A,size,i);
		
	
}



int main(){
	
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	buildMaxHeap(A,arraySize);
	printArray(A,arraySize);
	delete[] A;
	return 0;
	
}
