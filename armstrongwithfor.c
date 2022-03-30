#include <stdio.h>
#include<math.h>

void main(){
    int num,rem,count=0;
    int sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(int temp=num;temp>0;temp/=10){
         count+=1;
    }
    for (int j = num; j>0; j/=10){
        rem=j%10;
        sum=sum+pow(rem,count);
    }
    if(num==sum) {
        printf("%d is an armstrong number",num);
    }
    
}

