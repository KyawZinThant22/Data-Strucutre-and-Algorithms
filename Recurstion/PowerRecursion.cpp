#include <stdio.h>

//reduce number of multiplication
int pow(int m , int n){

    if(n == 0){
        return 1;
    }

    if(n % 2==0){
        return pow(m*m , n/2);
    }else {
        return m * pow(m*m , n/2);
    }
}

int power (int m , int n){

    if (n==0){
        return 1;
    }
    return pow(m,n-1)*m;
}

int main(){

    int r = pow(3,4);
    printf("%d ", r);
    return 0;
}


