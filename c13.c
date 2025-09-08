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
printf("the pair numbers :\n");
for(int i=0;i<x;i++){
    if(num[i]%2!=0)
    printf("%d\n",num[i]);}


return 0;
}