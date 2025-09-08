#include <stdio.h>
int main(){
int x;
float total=0;
float moy;
printf("how many numbers : ");
scanf("%d",&x);
if(x==0){
    printf("ERROR");
    return 0;
}
float num[x];
printf("enter numbers :\n");
for(int i=0;i<=x-1;i++){
    scanf("%f",&num[i]);
}
for(int i=0;i<x;i++){
total+=num[i];
}
printf("the total is : %.2f\n",total);

moy=total/x;

printf("the average is : %.2f",moy);

return 0;
}