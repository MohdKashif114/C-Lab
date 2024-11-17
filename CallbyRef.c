#include<stdio.h>


void changeValue(int* a){
    *a=15;
}

int main(){
    int a=10;
    printf("Previous value of a is %d \n",a);
    
    changeValue(&a);

    printf("The changed value of a is %d",a);
    return 0;
}