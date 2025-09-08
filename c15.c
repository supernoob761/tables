#include <stdio.h>
int main(){
int x;
printf("how many numbers for first elements : ");
scanf("%d",&x);
int num[x];
printf("enter the first elements :\n");
for(int i=0;i<=x-1;i++){
    scanf("%d",&num[i]);
}
int j;
printf("how many numbers for second elements : ");
scanf("%d",&j);
int num2[j];
printf("enter the second second :\n");
for(int i=0;i<=j-1;i++){
    scanf("%d",&num2[i]);
}
int num3[x+j];
for(int i=0;i<x;i++)
{
num3[i]=num[i];

}
for(int i=0;i<j;i++)
{
num3[x+i]=num2[i];
}
printf("the merge : \n");
for(int i=0;i<j+x;i++)
printf("%d\n",num3[i]);



return 0;
}