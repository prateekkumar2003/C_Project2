#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>


void merge(int* arr,int left,int middle,int right);
void mergeSort(int* arr,int left,int right);
void mySort(int* arr,int n){
    if(n<=1){
        return;
    }
    // if size of small(eg. till 30) use Insertion SORT
    if(n>1 && n<=30){
        for(int i=1;i<n;i++){
            int curr=arr[i];
            int prev=i-1;
            while(prev!=-1 && arr[prev]>curr){
                arr[prev+1]=arr[prev];
                prev--;
            }
            arr[prev+1]=curr;
        }
    }
    // if size greater then 30 use Merge Sort
    else{
        mergeSort(arr,0,n-1);
    }
}
void merge(int* arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int* arr, int left, int right) {
    if (left >= right) {
        return;
    }
    int middle = left + (right - left) / 2;

    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);

    merge(arr, left, middle, right);
}
