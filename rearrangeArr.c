#include<stdio.h>
#include<stdbool.h>
int main(){

    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result[size]; 
    int l=0,r=size-1;
    int k=0;
    bool left=false;
    bool right=true;
    while(l<=r){
        if(left){
            result[k]=arr[l];
            l++;
            left=false;
            right=true;
        }
        else{
            result[k]=arr[r];
            r--;
            left=true;
            right=false;
        }
        k++;
    }

    for(int i=0;i<size;i++){
        printf("%d ",result[i]);
    }
}