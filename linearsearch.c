#include<stdio.h>
void main()
{
int limit,i,count =0;
count++;
printf("enter the limit: ");
scanf("%d",&limit);
count++;
int a[limit];
printf("enter the element :");
count++;
for(i=0;i<limit;i++){
count++;
scanf("%d",&a[i]);
count++;
}
int y,yes = 0;
count++;
printf("enter the number should be searched:");
scanf("%d",&y);
count++;
for(i = 0;i<limit;i++){
count++;
if(y==a[i]){
count++;
yes ++;
count++;
printf("found");
count++;
printf("\n time_complexity is %d \n space_complexity %d",count,20+limit*4);

break;
}
count++;
}
count++;
if (yes == 0){
printf("not found \n");
count++;
count++;
printf("time_complexity is %d space_complexity %d",count,20+limit*4);

}
}

