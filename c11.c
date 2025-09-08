#include <stdio.h>
int main(){
    int x;
    int j;
    int replacement;
    int over = 1;

    printf("how many numbers : ");
    scanf("%d",&x);

    int num[x];
    printf("enter numbers :\n");
    for(int i=0;i<=x-1;i++){
        scanf("%d",&num[i]);
    }

    do{
        printf("your numbers were:\n");
        for(int i=0;i<x;i++){
            printf("%d\n",num[i]);
        }

        printf("do you want to preform a switch?\n");
        printf("1-YES\n");
        printf("2-NO\n");
        int replace;
        scanf("%d",&replace);

        switch(replace){
        case 1:
            printf("pick the number in the order:\n ");
            scanf("%d",&j);

            printf("what number you want to switch it with :\n ");
            scanf("%d",&replacement);

        
            for(int i=0;i<x;i++){
                if(num[i]==j){
                    num[i]=replacement;
                }
            }
            break;

        case 2:
            printf("Got it\n");
            over=0;
            break;

        default:
            printf("try again\n");
            break;
        }
    }while(over!=0);

    return 0;
}
