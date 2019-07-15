/*
1. Algorithmic Thinking, Peak Finding - https://www.youtube.com/watch?v=HtSuA80QTyo&t=1190s

Other resources - https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
				- https://www.youtube.com/watch?v=NFvAD5na5oU

Complexity - O(log n)

*/
#include "utility.h"
const int arraySize = 20;
const int range = 100;

int findPeakUtil(int *A, int low, int high, int size){
	
	int mid = low + (high - low)/2;
	
	//if mid element is the peak, return peak
	if(  ( mid == 0 || 
	       A[mid-1] <= A[mid]) //check in left area 
	       && 
		 ( mid == size-1 || 
		   A[mid+1] <= A[mid])) //check in right area
		
		return mid;
	
	//if mid-1 > mid, find for a peak in left subarray
	else if(mid > 0 && A[mid-1] > A[mid])
		return findPeakUtil(A,low,mid-1,size);
	
	//if mid+1 > mid, find for a peak in right subarray
	else
		return findPeakUtil(A,mid+1,high,size);
		
}

int findPeak(int *A, int size){
	
	return findPeakUtil(A,0,size-1,size);
	
}


int main(){
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	int peak = findPeak(A,arraySize);
	cout << "Peak found at Index : "<<peak;
	delete[] A;
	return 0;
}
// i think you overcomplicated a simple problem
