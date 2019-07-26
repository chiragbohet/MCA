/*
https://www.youtube.com/watch?v=GUDLRan2DWM
Classic Selection sort 
*/
#include "utility.h"

const int arraySize = 10; // size of the array
const int range = 100; // range of the elements in the array, 0 to range

selectionSort(int A[],int n){
	
	int iMin; //variable to store index of minimum element 
	
	for( int i = 0; i < n - 1; i++){
		
			iMin = i;
			
			for( int j = i+1; j < n ;j++){
				
				if(A[j] < A[iMin] ){
					iMin = j;
				}
				
			}
			
			/*cout<<"Minimum element is :"<<A[iMin]<<endl; 
			cout<<"Swapping "<<A[i] << " and "<< A[iMin]<<endl;*/
			
			swap(A[i],A[iMin]);	
			//printArray(A,n);
			//cout<<endl;
	}
	
	
}


int main(){
	
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	selectionSort(A,arraySize);
	printArray(A,arraySize);
	delete[] A;
	return 0;
}


