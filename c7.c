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

for(int i=0;i<x-1;i++){
    for(int j=0;j<x-1;j++)
    if(num[j] < num[j+1]){
    int Big=num[j];
    num[j]=num[j+1];
    num[j+1]=Big;
}
}
printf("here's your sorted numbers :");
for(int i=0;i<x;i++)
printf("%d\n",num[i]);
return 0;
}