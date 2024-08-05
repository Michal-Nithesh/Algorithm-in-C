#include <math.h>
#include <stdio.h>
#include <time.h>
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
sleep(4);
int i, key, j;
for (i = 1; i < n; i++) {
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
void printArray(int arr[], int n)
{
int i;
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
}
int main()
{
long tick1,tick2;
int arr[] = { 12, 11, 13, 5, 6 };
int n = sizeof(arr) / sizeof(arr[0]);
tick1 = clock();

insertionSort(arr, n);
tick2 = clock();
long elapsed = tick2-tick1;
double elapsed_time = ((double)elapsed/CLOCKS_PER_SEC);
printArray(arr, n);
printf("Time taken by the CPU is %lf seconds \n",elapsed_time);
return 0;
}
