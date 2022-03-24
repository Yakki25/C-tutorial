#include<stdio.h>

void main(){
    int x =2,temp;
    while(x<=10){
        temp =1;
        printf("\n");
        while(temp<=10){
            printf("%d\t",x*temp);
            temp++;
        }
        x++;
    }

}