#include <stdio.h>
int main (){
    FILE *file=fopen("hello.txt","w");
    if (file == NULL){
        perror("Error creating file.\n");
        return 1;

    }
    //write data to the file 
    fprintf(file,"this is the first line.\n");
    fprintf(file,"writting to file will overwrite its contents.\n");
    //close the file
    fclose(file);
     printf("file writting succesfully in write mode.\n");
    return 0;
 }