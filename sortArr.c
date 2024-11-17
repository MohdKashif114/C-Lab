#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=5;
    int* arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i=0; i <n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
