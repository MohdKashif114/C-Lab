#include <stdio.h>

void generatemagicSquare(int n) {
    int magicSquare[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    int num = 1; 
    int i = 0, j = n / 2; 

    while (num <= n * n) {
        magicSquare[i][j] = num; 
        num++;
        int new_i = (i - 1 + n) % n; 
        int new_j = (j + 1) % n;     

        if (magicSquare[new_i][new_j] != 0) {
            i = (i + 1) % n;
        } 
        else {
            
            i = new_i;
            j = new_j;
        }
    }

    printf("magic square of size %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter an odd number ");
    scanf("%d", &n);

    if (n % 2 == 0 || n <= 0) {
        printf("Please enter a positive odd number!\n");
        return 1;
    }

    generatemagicSquare(n);

    return 0;
}
