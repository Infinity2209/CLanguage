#include <stdio.h>
void bubblesort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void selectionsort(int a[], int n)
{
    int minposition, temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        minposition = i;
        for (j = i + 1; j < n - 1; j++)
        {
            if (a[minposition] > a[j])
            {
                minposition = j;
            }
        }
        if (minposition != i)
        {
            temp = a[minposition];
            a[i] = temp;
        }
    }
}
void insertionsort(int a[], int n)
{
    int i, j, element;
    for (i = 0; i < n; i++)
    {
        element = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > element)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = element;
    }
}
int partion(int a[], int low, int high)
{
    int pivoit = a[low];
    int i = low + 1;
    int j = high;
    int temp1, temp2;
    do
    {
        while (a[i] <= pivoit)
        {
            i++;
        }
        while (a[j] > pivoit)
        {
            j--;
        }
        if (i < j)
        {
            temp1 = a[j];
            a[j] = a[i];
            a[i] = temp1;
        }
    } while (i < j);
    temp2 = a[low];
    a[low] = a[j];
    a[j] = temp2;
    return (j);
}
void quicksort(int a[], int low, int high)
{
    int partionindex;
    if (low < high)
    {
        partionindex = partion(a, low, high);
        quicksort(a, low, partionindex - 1);
        quicksort(a, partionindex + 1, high);
    }
}

void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100], n, i, l = 0;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter your array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("your array is:");
    printarray(arr, n);
    // printf("Bubble sort:");
    // bubblesort(arr,n);
    // printf("Selection sort:");
    // selectionsort(arr,n);
    // printf("Insertion sort:");
    // insertionsort(arr,n);
    // printf("Quick sort:");
    // quicksort(arr,l,n);
    printf("your sorted array is:");
    printarray(arr, n);
    return 0;
}