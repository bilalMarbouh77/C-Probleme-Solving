#include<stdio.h>

int main(){

    int num,somme = 0;
    for(int i = 1;i<=8;i++){
        printf("entre num %d :",i);
        scanf("%d",&num);
        if(num<0){
            continue;
        }
        somme = somme + num;
    }
    printf("%d",somme);

    return 0;
}