/*

Implementing Merge Sort
Video : https://www.youtube.com/watch?v=TzeBrDU-JaY
Code : https://gist.github.com/mycodeschool/9678029

Properties : 
	*Divide and Conquer
	*Stable
	*Outplace
	*Time Complexity - O(n log n)
	*Space Complexity - TODO

*/

#include "utility.h"

const int range = 100;
const int arraySize = 13;

void merge(int *A, int *L,int leftCount, int *R, int rightCount){
	
	int i,j,k;
	i = j = k = 0; //i,j and k are the used to iterate index of Left Subarray, Right Subarray and the Merged array respectively
	
	while(i < leftCount && j < rightCount) {
		
		if(L[i] < R[j]) 
			A[k++] = L[i++];
		else 			
			A[k++] = R[j++];
	
	}
	
	//if one of the subarrays is exhausted, add the remains of the other to the end of Merged array
	while( i < leftCount) A[k++] = L[i++];
	while( j < rightCount) A[k++] = R[j++];
	
}
	


void mergeSort(int *A,int size){
	
	int *L, *R, mid, i;
	
	if( size < 2 ) return; //base condition
	
	mid = size/2;
	
	//creating two subarrays
	L = new int[mid];
	R = new int [size - mid];
	
	//adding elements in the subarrays
	for(i = 0; i < mid;i++) L[i] = A[i];
	for(i = mid;i < size;i++) R[i - mid] = A[i];
	
	//recursive calls
	mergeSort(L,mid);
	mergeSort(R,size-mid);
	merge(A,L,mid,R,size-mid);
	
	//deleting the subarrays
	delete[] L;
	delete[] R;
	
}

int main(){
	
	//calling function generateRandomArray
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	mergeSort(A,arraySize);
	printArray(A,arraySize);
	delete[] A;
	return 0;
	
}
