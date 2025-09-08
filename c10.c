#include <stdio.h>
int main(){
int j;
int pass=1;
int num[13]={1,2,3,4,5,8,6,10,11,17,32,78,95};


do{
    printf("pick a number : ");
    scanf("%d",&j);
    for(int i=0;i<13;i++){
if(j==num[i]){
    printf("it exists on number %d",i+1);
    pass=0;  
}

    }
}while(pass!=0);


return 0;
}