#include <stdio.h>
int main(){
int x;
int total=0;
printf("how many numbers : ");
scanf("%d",&x);
int num[x];
printf("enter numbers :\n");
for(int i=0;i<=x-1;i++){
    scanf("%d",&num[i]);
}
printf("your numbers were:\n");
for(int i=0;i<x;i++){
printf("%d\n",num[i]);
total+=num[i];
}
printf("the total is : %d",total);


return 0;
}