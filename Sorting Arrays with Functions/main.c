#include <stdio.h>
#include <stdlib.h>
void getArr(int* arr,int elementNumber){
int i;
for(i=0; i<elementNumber; i++){
    printf("%d. element = ",i+1);
    scanf("%d",arr+i);
}

}

void sortArr(int* arr,int num){

int i,j;
for(i=0; i<num-1; i++){
    for(j=0; j<num-i-1; j++){
        int temp;
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}

void printArr(int* arr,int num){
printf("Your array after sorting :\n");
int i=0;
for(i=0; i<num; i++){
    printf("%d ",*(arr+i));
}

}


int main()
{
    int element;
    int* arr ;
    printf("Enter the number of elements in your array:\n");
    scanf("%d", &element);
    arr = (int*)malloc(sizeof(int)*element);
    getArr(arr, element);
    sortArr(arr, element);
    printArr(arr, element);


    return 0;
}
