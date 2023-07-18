#include <stdio.h>
#include <stdlib.h>

int main()

{
    FILE *fptr;
    fptr = fopen(".\\numbers2.txt", "a"  );

    printf("Hello world!\n");
    int counter = 0;
    while (1==1){
        counter++;
        fprintf(fptr, "%d \n", counter);

        if(counter >= 10000000){
            break;
        }

        if(counter % 1000000 == 0){
            printf("%d \n", counter/1000000);
        }
    }
    fclose(fptr);
    return 0;
}