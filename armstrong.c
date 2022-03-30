#include <stdio.h>
#include <math.h>

void main(){
    // int num,temp,rem,sum=0;
    // int count =0;
for(int num,temp,rem,sum=0,int count =0;temp>0,temp=num;){
    printf("The number is : ");
    scanf("%d",&num);
    // temp = num;    
        count +=1;
        temp /=10;
}
for(int num,temp,rem,sum=0,int count =0;temp>0,temp=num;){


    // while(temp>0){
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp/=10;
}
    if(num==sum){
        printf("%d is a armstrong number",num);
    }
}
//153     371
// total number of digits = 3
// 1^3 + 5^3 + 3^3 =3^3+5^3+1^3
// 1    125 27
// 153


// 1634
// 1^4+6^4+3^4+4^4=1634