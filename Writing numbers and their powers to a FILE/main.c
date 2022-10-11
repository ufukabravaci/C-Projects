#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp ;
    fp= fopen("powers.txt","w");
    int i;
    if(fp != NULL){
        for(i=1; i<=10; i++){
            fprintf(fp , "%d %d\n",i , i*i);
        }

        fclose(fp);
        printf("Writing process was successful! Please Check the txt file.\n");
    }
    return 0;
}
