#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 20
int pos;
int binsearch (int,int[],int,int,int);
int linsearch (int,int[],int);
void main()
{ int ch=1; double t; int n,i,a [max],k,op,low,high,pos;
long tick1,tick2;
long elapsed=tick2-tick1;
double elapsed_time = ((double)elapsed/CLOCKS_PER_SEC);
while(ch)
{
printf("\n.......MENU.......\n 1.BinarySearch \n 2.Linear search \n 3.Exit \n");
printf("\n enter your choice\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("\n enter the number of elments\n"); scanf("%d",&n);
printf("\n enter the number of an array in the order \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the elements to be searched \n");
scanf("%d",&k); low=0;high=n-1;
tick1=clock();
pos=binsearch(n,a,k,low,high);
tick2=clock();
if(pos==-1)
printf("\n\nUnsuccessful search");
else

printf("\n element %d is found at position %d",k,pos+1);
printf("Time taken by the CPU is %lf seconds \n",elapsed_time);
break;
case 2:printf("\n enter the number of elements \n");
scanf("%d",&n);
printf("\n enter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the element to be searched \n");
scanf("%d",&k);
tick1=clock();
pos=linsearch(n,a,k);
tick2=clock();
if(pos==-1)
printf("\n\n Unsuccessful search");
else
printf("element %d is found at position %d",k,pos+1);
printf("Time taken by the CPU is %lf seconds \n",elapsed_time);
break;
default:printf("Invalid choice entered \n");
exit(0);
}
printf("\n Do you wish to run again(1/0) \n");
scanf("%d",&ch);
}
}
int binsearch(int n,int a[],int k,int low,int high)
{
int mid;
mid=(low+high)/2;
if(low>high)
return -1;
if(k==a[mid])
return(mid);
else
if(k<a[mid])
return binsearch(n,a,k,low,mid-1);
else
return binsearch(n,a,k,mid+1,high);
}
int linsearch(int n,int a[],int k)
{
if(n<0) return -1;
if(k==a[n-1])
return (n-1);
else
return linsearch(n-1,a,k);
}
