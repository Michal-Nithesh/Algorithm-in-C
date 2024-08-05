#include <stdio.h>
#include<time.h>
void main()
{
int heap[10], num, i, j, c, rootElement, tempVar;
long tick1,tick2;
printf("\n Enter num of elements :");
scanf("%d", &num);
printf("\n Enter the nums : ");
for (i = 0; i < num; i++)
scanf("%d", &heap[i]);
for (i = 1; i < num; i++)
{
c = i;
do
{
rootElement = (c - 1) / 2;
if (heap[rootElement] < heap[c])
{
tempVar = heap[rootElement];

heap[rootElement] = heap[c];
heap[c] = tempVar;
}
c = rootElement;
} while (c != 0);
}
tick1=clock();
printf("Heap array : ");
for (i = 0; i < num; i++)
printf("%d\t ", heap[i]);
for (j = num - 1; j >= 0; j--)
{
tempVar = heap[0];
heap[0] = heap[j];
heap[j] = tempVar;
rootElement = 0;
do
{
c = 2 * rootElement + 1;
if ((heap[c] < heap[c + 1]) && c < j-1)
c++;
if (heap[rootElement]<heap[c] && c<j) {
tempVar = heap[rootElement];
heap[rootElement] = heap[c];
heap[c] = tempVar;
}
rootElement = c;
} while (c < j);
}
printf("\n The sorted array is : ");
for (i = 0; i < num; i++)
printf("\t %d", heap[i]);
tick2-clock();
long elapsed = tick2-tick1;
double elapsed_time = ((double)elapsed/CLOCKS_PER_SEC);
printf("Time taken by the CPU is %lf seconds \n",elapsed_time);
}
