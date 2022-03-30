#include <stdio.h>

void main(){
    int num,temp,count=0,rem;
    printf("Enter the number");
    scanf("%d",&num);
    for(int temp=num;temp>0;temp/=10){
        count+=1;
    }
    printf("Number of digits is %d",count);
}

//logic 786 0
//get the remainder after division by 10 6 8 7
//increase count 1 2 3
//divide the number by 10 78 7 0
//repeat the same with quotient until quotient becomes 0