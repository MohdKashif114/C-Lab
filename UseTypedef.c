#include<stdio.h>
#include <math.h>

typedef struct{
    float real;
    float imaginary;
} Complex;

Complex add(Complex c1,Complex c2){
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
Complex sub(Complex c1,Complex c2){
    Complex result;
    result.real = c1.real- c2.real;
    result.imaginary = c1.imaginary- c2.imaginary;
    return result;
}

int main(){

    Complex a;
    a.real=10.0;
    a.imaginary=5.0;

    Complex b;
    b.real=20.0;
    b.imaginary=15.0;

    Complex addedno = add(a,b);
    Complex subno = sub(a,b);

   if(addedno.imaginary>=0){
        printf("%.1f + %.1fi \n",addedno.real,addedno.imaginary);
   }
   else{
        printf("%.1f - %.1fi \n",addedno.real,fabs(addedno.imaginary));
   }
   if(subno.imaginary>=0){
        printf("%.1f + %.1fi \n",subno.real,subno.imaginary);
   }
   else{
        printf("%.1f - %.1fi \n",subno.real,fabs(subno.imaginary));
   }



}