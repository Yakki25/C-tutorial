#include <stdio.h>

void main(){
    int num,temp,rem;
    int count=0;
    int newNum=0;
    printf("The number is : ");
    scanf("%d",&num);
    temp=num;
    while (temp>0)
    {
        rem=temp%10;
        count+=1;
        temp=temp/10; 
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



