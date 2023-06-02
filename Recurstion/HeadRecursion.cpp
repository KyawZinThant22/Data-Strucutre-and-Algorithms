#include <stdio.h>


void fun( int n ){

    if ( n > 0 ){
        fun(n-1);
        printf("%d", n);
    }
}

int main () {
    int x = 3 ;
    fun(x);

    return 0;
}


// the function deosn't have to perform anything before calling it .
// it has to do everything only at the time of returning.
// it is called Head Recursion