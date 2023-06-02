#include <stdio.h>


void fun1(int n){
    if ( n > 0 ){
        printf("%d ",n);
        fun1(n-1);
    }
}

int main () {
    int x = 5;
    fun1(x);
    return 0;
}

//if a recursive function is calling itself and that recursive call is the last statement in the function is called Tail Recursion.
// After that it's not performing anything.