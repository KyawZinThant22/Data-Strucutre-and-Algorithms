#include <stdio.h>


void TOH (int n ,int A ,int  B , int C ) {
    if ( n > 0 ){
        TOH(n-1,A,B,C);
        printf("%d , %d \n" , A , C);
        TOH(n-1,B,C,A);
    }
} 

int main(){
    TOH(3,1,2,3);
    return 0;
}