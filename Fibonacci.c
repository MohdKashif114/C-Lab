#include<stdio.h>

int main(){
    
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int f1=0,f2=1;
    int ans;
    int fn_1=1;
    int fn_2=0;
    printf("%d, ",f1);
    printf("%d, ",f2);
    for(int i=2;i<n;i++){

        ans=fn_1+fn_2;
        printf("%d, ",ans);
        fn_2=fn_1;
        fn_1=ans;
    }
}