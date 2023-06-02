#include <stdio.h>
void funB(int n);

void funA(int n ){
    if ( n > 0){
        printf("%d ", n);
        funB(n-1);
    }
}

void funB(int n){
    printf("%d ",n);
    if ( n > 1){
    funA(n/2);
    }
}

int main () {
    funA(20);
    return 0 ;
}