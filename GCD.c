#include<stdio.h>

int gcd(int a,int b,int i,int ans){
    if(i>a || i>b){
        return ans;
    }
    if(a%i==0 && b%i==0){
        return gcd(a,b,i+1,i);
    }
    else{
        return gcd(a,b,i+1,ans);
    }
}

int main(){
    int a,b;
    printf("Enter the numbers :\n ");
    scanf("%d %d",&a,&b);
    int ans=1;
    int finalans = gcd(a,b,1,ans);
    printf("The GCD is %d",finalans);
}