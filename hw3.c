#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    // Main incremental counter (to be used in for loops)
    int i;
    
    // Make and fill first array with random numbers
    int arr1[10];
    for(i = 0; i < 9; i++) {
        arr1[i] = rand();
    }
    arr1[9] = 0;

    printf("First array values:\n");
    for(i = 0; i < 10; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }


    // Make and fill second array with reversed values
    int arr2[10];
    for(i = 0; i < 10; i++) {
        *(arr2 + i) = *(arr1 + 9 - i);
    }

    printf("\nSecond array values:\n");
    for(i = 0; i < 10; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    return 0;
}
