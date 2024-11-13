#include <stdio.h>
int main (){
    FILE *file=fopen("example.txt","w");
    if (file == NULL){
        printf("Error creating file.\n");
        return 1;

    }
    printf("File created succesfully.\n");
    fclose(file);
    return 0;
 }