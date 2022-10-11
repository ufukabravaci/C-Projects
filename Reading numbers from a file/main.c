#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp ;
    fp= fopen("numbers.txt","r");
    int i,num1,num2;
    if(fp != NULL){
    for(i=0; i<10; i++){
        fscanf(fp, "%d%d",&num1, &num2);
        printf("%d %d\n",num1,num2);
    }

        }
    fclose(fp);

    return 0;
}
