#include <stdio.h>

void main(){
    for(int i =1,j=10; i<10,j>1; i++, j--){
        printf("%d %d ",i,j);
    }

    
    
}

// 1 99 2 98 3 97..

// Loop1
//      Loop2
// 1 10 1 9 18 17 16 15 1 4 13 1 2 1 1
// 2 10 1 9..

// 5 10 5 9 5 8

// Loop1
// Loop2
// 1 2 3 4 5 10 9 8 7 6 5 4 3 2 1
