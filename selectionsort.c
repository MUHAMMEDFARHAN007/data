#include<stdio.h>
void main()
{
int i,j,n,min_index,temp,count=0;
count++;
printf("Enter limit:");
scanf("%d",&n);
count++;
int a[n];
printf("Enter numbers:\n");
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<n;i++)
{
count++;
min_index=i;
count++;
for(j=i+1;j<n;j++)
{
count++;
if(a[j]<a[min_index])
{
count++;
min_index=j;
temp=a[min_index];
a[min_index]=a[i];
a[i]=temp;
count+=4;
}
}
}
printf("Sorted array is \n");
for(i=0;i<n;i++)
{
count++;
printf("%d\n",a[i]);
count++;
}
count++;
printf("Space complexity is %d\n",24+4*n);
count+=2;
printf("Time complexity is %d",count);
}


