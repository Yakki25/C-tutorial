#include <stdio.h>

void main(){
    int num,rem;
    int count=0;
    int newNum=0;
    printf("The number is : ");
    scanf("%d",&num);

    for(int temp =num;temp>0;temp=temp/10)
    {
        rem=temp%10;
        count+=1; 
        newNum=newNum*10+rem;
    }
    printf("Original number is %d and reveresd number is %d\n",num,newNum);
    if (num==newNum)
    {
        printf("%d is a palindrome",num);
    }
    else
    {
       printf("%d is not a palindrome",num); 
    }
}