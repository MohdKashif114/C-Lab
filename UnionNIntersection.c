#include <stdio.h>
#include<stdbool.h>


void uArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int k=0;

    
    for (int i = 0; i < size1; i++) {
        result[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < size2; i++) {
        bool found = false;
        for (int j = 0; j < size1; j++) {
            if (arr2[i]== arr1[j]) {
                found=true;
                break;
            }
        }
        if (!found) {
            result[k] = arr2[i];
            k++;
        }
    }
    
    for(int i=0;i<k;i++){
        printf("%d ",result[i]);
    }
}


int iArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int k = 0;

    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                result[k] = arr1[i];
                k++;
                break; 
            }
        }
    }

     for(int i=0;i<k;i++){
        printf("%d ",result[i]);
    }
    
}

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {4,5,6,7,8};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int unionResult[size1+size2], intersectionResult[size1+size2];

    printf("The union is : ");
    uArrays(arr1, size1, arr2, size2, unionResult);
    printf("\nThe intersection is : ");
    
    iArrays(arr1, size1, arr2, size2, intersectionResult);

    
    return 0;
}
