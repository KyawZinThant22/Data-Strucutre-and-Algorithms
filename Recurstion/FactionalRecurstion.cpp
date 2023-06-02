#include <stdio.h>


int factional (int n ){
   if(n==0){
        return 1;
   }else {
    return factional(n-1)*n;
   }
}

int main(){

    int x = 4 ;
    int r = factional(x);
    printf("%d", r);
    return 0 ;
}