#include <stdio.h>
#include <stdlib.h>

// Define the array ADT structure
typedef struct {
    int *arr;   // Pointer to the array elements
    int size;   // Size of the array
} ArrayADT;

// Function to initialize the array ADT
void initialize(ArrayADT *array, int size) {
    array->arr = (int *)malloc(size * sizeof(int));
    if (array->arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    array->size = size;
}

// Function to get an element at a given index
int get(ArrayADT *array, int index) {
    if (index < 0 || index >= array->size) {
        printf("Index out of bounds!\n");
        exit(EXIT_FAILURE);
    }
    return array->arr[index];
}

// Function to set an element at a given index
void set(ArrayADT *array, int index, int num) {
    if (index < 0 || index >= array->size) {
        printf("Index out of bounds!\n");
        exit(EXIT_FAILURE);
    }
    array->arr[index] = num;
}

// Function to find the maximum element in the array
int max(ArrayADT *array) {
    int max = array->arr[0];
    for (int i = 1; i < array->size; i++) {
        if (array->arr[i] > max) {
            max = array->arr[i];
        }
    }
    return max;
}

// Function to find the minimum element in the array
int min(ArrayADT *array) {
    int min = array->arr[0];
    for (int i = 1; i < array->size; i++) {
        if (array->arr[i] < min) {
            min = array->arr[i];
        }
    }
    return min;
}

// Function to search for an element in the array
int search(ArrayADT *array, int num) {
    for (int i = 0; i < array->size; i++) {
        if (array->arr[i] == num) {
            return i;
        }
    }
    return -1;  // Element not found
}

// Function to insert an element at a given index
void insert(ArrayADT *array, int index, int num) {
    if (index < 0 || index > array->size) {
        printf("Invalid index for insertion!\n");
        exit(EXIT_FAILURE);
    }
    array->size++;
    array->arr = (int *)realloc(array->arr, array->size * sizeof(int));
    if (array->arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    for (int i = array->size - 1; i > index; i--) {
        array->arr[i] = array->arr[i - 1];
    }
    array->arr[index] = num;
}

// Function to append an element to the end of the array
void append(ArrayADT *array, int num) {
    insert(array, array->size, num);
}

int main() {
    // Example usage of the array ADT
    ArrayADT array;
    int size = 5;
    initialize(&array, size);

    // Initialize array elements
    for (int i = 0; i < size; i++) {
        set(&array, i, i + 1);
    }

    // Perform operations on the array
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", get(&array, i));
    }
    printf("\n");

    printf("Maximum element: %d\n", max(&array));
    printf("Minimum element: %d\n", min(&array));

    int searchElement = 3;
    int searchIndex = search(&array, searchElement);
    if (searchIndex != -1) {
        printf("Element %d found at index %d\n", searchElement, searchIndex);
    } else {
        printf("Element %d not found in the array\n", searchElement);
    }

    int insertIndex = 2;
    int insertElement = 10;
    insert(&array, insertIndex, insertElement);
    printf("Array after insertion: ");
    for (int i = 0; i < array.size; i++) {
        printf("%d ", get(&array, i));
    }
    printf("\n");

    int appendElement = 20;
    append(&array, appendElement);
    printf("Array after appending: ");
    for (int i = 0; i < array.size; i++) {
        printf("%d ", get(&array, i));
    }
    printf("\n");

    // Free the memory allocated for the array
    free(array.arr);

    return 0;
}
