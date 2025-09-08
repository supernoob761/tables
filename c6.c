#include <stdio.h>
int main(){
int x;
int multi;
int total=1;
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
}
printf("pick a number the multiply all of the elements : ");
scanf("%d",&multi);
for(int i=0;i<=x-1;i++){
    num[i]=num[i]*multi;
}
printf("your numbers are with the multiplication:\n");
for(int i=0;i<x;i++){
printf("%d\n",num[i]);
}

return 0;
}