#include<stdlib.h>
#include<stdio.h>
#include "addSort.h"

void mySort(int* arr,int n);
int main(){
	int arr[10]={1,4,3,2,8,5,6,3,5,9};
	mySort(arr,10);
	printf("Printing the array\n");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
		
	return 0;
}
