#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50] , i , j , num , temp=0 ;

    printf("Enter the number of the elements in array(max 50) : \n");
    scanf("%d", &num);
    printf("Please enter the values of the array : \n");
    for(i = 0 ; i<num ; i++){
        scanf("%d", &arr[i]);
    }
    for (i=0 ; i<num ; i++){

        for (j=0 ; j<num-1-i ; j++){
            if (arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            }
            printf("\nAfter %dth iteration : \n" ,i+1);
            for (j=0 ; j<num ; j++)
                printf("%d ", arr[j]);
        }
    printf("\n\n\nAfter implementing bubble sort to your array :\n");
    for(j=0 ; j<num ; j++)
        printf("%d ", arr[j]);
        printf("\n\n");
    return 0;
}
