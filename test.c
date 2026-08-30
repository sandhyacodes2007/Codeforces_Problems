#include<stdio.h>
int main(){
    FILE* fptr;
    fptr= fopen("newtest.txt", "a");
    /*
    if(fptr==NULL){
        printf("file does not exist\n");
    }
    else{
    fclose(fptr);
}*/

char ch;
fscanf(fptr, "%c", &ch);
printf("character=%c", ch);
fclose(fptr);

return 0;
}