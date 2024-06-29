#include <stdio.h>
#include <stdlib.h>

// Array ADT (Abstract Data Type) ka structure define karo
typedef struct
{
    int *arr; // Array ke liye pointer for the first integer
    int size; // Array ka size
} ArrayADT;

// Array ADT ko initialize karne ka function
void initialize(ArrayADT *array, int size)
{
    array->arr = (int *)malloc(size * sizeof(int)); // Memory allocate karo array ke liye
    if (array->arr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    array->size = size; // Array ka size set karo
}

// Diye gaye index par element milane ka function
int get(ArrayADT *array, int index)
{
    if (index < 0 || index >= array->size)
    {
        printf("Index out of bounds!\n");
        exit(EXIT_FAILURE);
    }
    return array->arr[index]; // Element ko return karo
}

// Diye gaye index par element set karne ka function
void set(ArrayADT *array, int index, int num)
{
    if (index < 0 || index >= array->size)
    {
        printf("Index out of bounds!\n");
        exit(EXIT_FAILURE);
    }
    array->arr[index] = num; // Element ko set karo
}

// Array me se maximum element dhundhne ka function
int max(ArrayADT *array)
{
    int max = array->arr[0];
    for (int i = 1; i < array->size; i++)
    {
        if (array->arr[i] > max)
        {
            max = array->arr[i];
        }
    }
    return max; // Maximum element ko return karo
}

// Array me se minimum element dhundhne ka function
int min(ArrayADT *array)
{
    int min = array->arr[0];
    for (int i = 1; i < array->size; i++)
    {
        if (array->arr[i] < min)
        {
            min = array->arr[i];
        }
    }
    return min; // Minimum element ko return karo
}

// Array me se kisi element ko dhundhne ka function
int search(ArrayADT *array, int num)
{
    for (int i = 0; i < array->size; i++)
    {
        if (array->arr[i] == num)
        {
            return i; // Agar element mil gaya to index ko return karo
        }
    }
    return -1; // Agar element nahi mila to -1 return karo
}

// Kisi index par element ko insert karne ka function
void insert(ArrayADT *array, int index, int num)
{
    if (index < 0 || index > array->size)
    {
        printf("Invalid index for insertion!\n");
        exit(EXIT_FAILURE);
    }

    // Array ko resize karo naye element ke liye
    array->size++;
    array->arr = (int *)realloc(array->arr, array->size * sizeof(int));
    if (array->arr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    // Naye element ke liye jagah banane ke liye elements ko right shift karo
    for (int i = array->size - 1; i > index; i--)
    {
        array->arr[i] = array->arr[i - 1];
    }

    // Diye gaye index par naya element insert karo
    array->arr[index] = num;
}

// Array ke end me ek element ko add karne ka function
void append(ArrayADT *array, int num)
{
    insert(array, array->size, num); // Array ke end me insert karo
}

int main()
{
    ArrayADT array;
    int size = 10;
    initialize(&array, size); // Array initialize karo

    // Array ke elements ko initialize karo
    for (int i = 0; i < size; i++)
    {
        set(&array, i, i + 1);
    }

    // Array ke elements ko display karo
    printf("Array ke elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", get(&array, i));
    }
    printf("\n");

    // Maximum aur minimum elements ko display karo
    printf("Maximum element: %d\n", max(&array));
    printf("Minimum element: %d\n", min(&array));

    // Ek element ko search karo
    int searchElement = 3;
    int searchIndex = search(&array, searchElement);
    if (searchIndex != -1)
    {
        printf("Element %d index %d par mila\n", searchElement, searchIndex);
    }
    else
    {
        printf("Element %d array me nahi mila\n", searchElement);
    }

    // Ek element ko insert karo
    int insertIndex = 2;
    int insertElement = 10;
    insert(&array, insertIndex, insertElement);
    printf("Insertion ke baad array: ");
    for (int i = 0; i < array.size; i++)
    {
        printf("%d ", get(&array, i));
    }
    printf("\n");

    // Ek element ko append karo
    int appendElement = 20;
    append(&array, appendElement);
    printf("Append karne ke baad array: ");
    for (int i = 0; i < array.size; i++)
    {
        printf("%d ", get(&array, i));
    }
    printf("\n");

    // Array ke liye allocate ki gayi memory free karo
    free(array.arr);

    return 0;
}
