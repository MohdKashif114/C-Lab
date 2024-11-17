#include <stdio.h>

int main() {
    size_t sizec= sizeof(char);
    size_t sizei = sizeof(int);
    size_t sizef= sizeof(float);
    size_t sized= sizeof(double);
    size_t sizel = sizeof(long);
   
    printf("Size of char is %zu bytes, %zu bits\n", sizec, sizec* 8);
    printf("Size of int is %zu bytes, %zu bits\n", sizei, sizei* 8);
    printf("Size of float: %zu bytes, %zu bits\n", sizef, sizef* 8);
    printf("Size of double: %zu bytes, %zu bits\n", sized, sized* 8);
    printf("Size of long is :%zu bytes, %zu bits\n", sizel, sizel*8);
    

    return 0;
}
