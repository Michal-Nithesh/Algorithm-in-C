#include<stdio.h>
#include <time.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
sleep(10);
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j){
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}
int main(){
int i, count, number[25];
long tick1,tick2;

printf("How many elements are u going to enter?: ");
scanf("%d",&count);
printf("Enter %d elements: ", count);
for(i=0;i<count;i++)
scanf("%d",&number[i]);
tick1=clock();
quicksort(number,0,count-1);
tick2=clock();
long elapsed =tick2-tick1;
double elapsed_time = ((double)elapsed/CLOCKS_PER_SEC);
printf("Order of Sorted elements: ");
for(i=0;i<count;i++)
printf(" %d",number[i]);
printf("Time taken by the CPU is %lf seconds \n",elapsed_time);
return 0;
}
