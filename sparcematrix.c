#include<stdio.h>
int main(){
int rows,cols;
printf("enter the no of rows:");
scanf("%d",rows);
printf("enter the no of cols:");
scanf("%d",cols);
int sparcematrix[rows][cols];
printf("enter the elements for spacre matrix: ");
for (int i = 0;i<rows;i++){
for (int j = 0;j<cols;j++){
scanf("%d",sparcematrix[rows][cols]);
}
}
printf("the sparce matrix is\n");
for(int i=0;i<orws;i++){
for(int j=0;j<orws;j++){
printf("%d",sparcematrix[i][j]);
printf("\t");
}
printf("\n");
}
int noncount = 0,trow=1,tcol=3;
for(int i=0; i<row;i++){
for(int j=0; j<row;j++){
if(sparcematrix[i][j] !=0){
noncount++;
trow++;
}
}
}
int k=1,tuplematrix[trow][tcol];
tuplematrix[0][1] = row;
tuplematrix[0][2] = col;
tuplematrix[0][3] = noncount;
for (int i=0; i<row;i++){
for(int j=0;j<orws;j++){
if(sparcematrix[i][j] !=0){
tuplematrix[k][0]! = i;
tuplematrix[k][1] = j;
tuplematrix[k][2] =sparcematrix[i][j] ;
k++;
}
}
}
printf("the tuple matrix is\n");
for(int i=0; i<row;i++){
for(int j=0; j<row;j++){
printf("%d",tuplematrix[i][j] );
printf("\t");
}
printf("\n");
}
}
