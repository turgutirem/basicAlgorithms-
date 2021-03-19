

#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#define A_SIZE 10
using namespace std;
void insertSort(int* A, int size) {
	int key, i, j;
	for (j = 0; j < size; j++) {
		i = j;
		while (i > 0 && A[i] <A[i-1]) {
			key = A[i];
			A[i] = A[i - 1];
			A[i - 1] = key;
			i--;
		}
	}
}
void printSort(int* A, int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << A[i] << " " ;
	}
	cout<< endl;
}
int main()
{

	int a[A_SIZE] = { 2,5,3,6,0,9,4,1,7,8 };
	printSort(a, A_SIZE);
	insertSort(a, A_SIZE);
	printSort(a, A_SIZE);
	
	return 0;
}

