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
int Small=num[0];
for(int k=1;k<x;k++){
    if(num[k] < Small){
    Small=num[k];}
}
printf("%d",Small);
return 0;
}