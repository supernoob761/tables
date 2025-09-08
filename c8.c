#include <stdio.h>
int main(){
int x;
printf("how many numbers : ");
scanf("%d",&x);
int num[x];
int num2[x];
printf("enter numbers :\n");
for(int i=0;i<=x-1;i++){
    scanf("%d",&num[i]);
}
printf("your numbers were:\n");
for(int i=0;i<x;i++){
printf("%d\n",num[i]);}
for(int j=0;j<x;j++){
num2[j]=num[j];
}

printf("the copy :\n");
for(int i=0;i<x;i++){
    printf("%d\n",num2[i]);
}

return 0;
}