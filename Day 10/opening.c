#include <stdio.h>
int main (){
    FILE *file=fopen("example.txt","r");
    if (file == NULL){
        printf("Error opening file.\n");
        return 1;

    }
    printf("file opened succesfully.\n");
    fclose(file);
    return 0;
 }