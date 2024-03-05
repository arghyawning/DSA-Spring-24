#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int i, n = 5;

    // malloc
    int *arr = (int *)malloc(n * sizeof(int));
    assert(arr != NULL);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // calloc
    int *arr2 = (int *)calloc(n, sizeof(int));
    assert(arr2 != NULL);
    for (i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    // realloc
    n = 10;
    arr = (int *)realloc(arr, n * sizeof(int));
    assert(arr != NULL);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    //  free
    free(arr);
    free(arr2);
}