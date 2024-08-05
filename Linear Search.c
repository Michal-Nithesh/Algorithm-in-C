#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 20
int pos;
int linsearch (int,int[],int);
void main()
{ int ch=1; double t; int n,i,a [max],k,op,low,high,pos;
clock_t begin,end,ctime;
double cpu_time_used;
begin=clock();
end=clock();
while(ch)
{
printf("\n.......MENU.......\n 1.Linear search \n 2.Exit \n");
printf("\n enter your choice\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("\n enter the number of elements \n");
scanf("%d",&n);
printf("\n enter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the element to be searched \n");
scanf("%d",&k);
begin=clock();
pos=linsearch(n,a,k);
end=clock();
if(pos==-1)
printf("\n\n Unsuccessful search");
else
printf("element %d is found at position %d",k,pos+1);
ctime=(end-begin)/cpu_time_used;
printf("\n Time taken is %ld CPU cycles \n",ctime);
break;
default:printf("Invalid choice entered \n");
exit(0);
}
printf("\n Do you wish to run again(1/0) \n");
scanf("%d",&ch);
}
}
int linsearch(int n,int a[],int k)
{

if(n<0) return -1;
if(k==a[n-1])
return (n-1);
else
return linsearch(n-1,a,k);
}
