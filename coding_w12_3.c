#include <stdio.h>

// ฟังก์ชัน doubleArray ใช้ pointer กับ array

void doubleArray(int *arr, int size) {

    for (int i = 0; i < size; i++) {

        arr[i] *= 2;

    }

}

int main() {

    int arr[] = {2, 4, 6, 8, 10};

    int size = 5;

    printf("Before: ");

    for (int i = 0; i < size; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");

    doubleArray(arr, size);   // เรียกฟังก์ชัน

    printf("After:  ");

    for (int i = 0; i < size; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");

    return 0;

}