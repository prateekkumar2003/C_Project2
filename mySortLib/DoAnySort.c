#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include "addSort.h"

void mySort(int* arr,int n);
int main(){
	printf("Enter the size of array\n");
	int n;
	scanf("%d",&n);
	int* arr=malloc(n*sizeof(int));
	printf("Enter the elements of array to sort\n");
	for(int i=0;i<n;i++){
		int ele;
		scanf("%d",&ele);
		arr[i]=ele;
	}
	mySort(arr,n);
	printf("After sorting\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
