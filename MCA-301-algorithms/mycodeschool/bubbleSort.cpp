/*
Bubble Sort
*/
#include "utility.h"

const int arraySize = 10;
const int range = 100;

void bubbleSort(int A[],int size){

	for(int i = 0; i < size ; i++){
		
		for(int j = 0;j < size - 1; j++){

			if(A[j]>A[j+1]) {

				swap(A[j],A[j+1]);

			}
		}

	}

}

int main(){
	int *A = generateRandomArray(arraySize,range);
	printArray(A,arraySize);
	bubbleSort(A,arraySize);
	printArray(A,arraySize);
	delete[] A;
	return 0;
}
// comment krle bhai isme :)
