#include<stdio.h>


void swap(char** str1,char** str2){
    char* temp;
    temp=*str1;
    *str1=*str2;
    *str2=temp;
}


int main(){
    char* str1="Kashif";
    char* str2="Hammad";

    printf("Before swap : \n");
    printf("%s\n", str1);
    printf("%s\n", str2);

    swap(&str1,&str2);

    printf("After swap : \n");
    printf("%s \n",str1);
    printf("%s \n",str2);
}