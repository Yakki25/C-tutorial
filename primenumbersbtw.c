#include<stdio.h>
void main(){
    
    for (int i=3; i < 100; i++)
    {
    int num=i,fact=0;
    int tem=num;
    int rem=0;
    while(num>2){
        rem=tem%(num-1);
        if(rem==0){
        fact+=1;
        }
        num--;
    }
    if(fact==0){
        printf("%d\n",i);
    }
    }
    

}

