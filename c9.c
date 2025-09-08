#include <stdio.h>
int main(){
int x;
printf("how many numbers : ");
scanf("%d",&x);
int num[x];
printf("enter numbers :\n");
for(int i=0;i<=x-1;i++){
    scanf("%d",&num[i]);
}
printf("your numbers were:\n");
for(int i=0;i<x;i++){
printf("%d\n",num[i]);}



printf("the reverse:\n");
for(int i=x-1;i>=0;i--){
printf("%d\n",num[i]);}
return 0;
}