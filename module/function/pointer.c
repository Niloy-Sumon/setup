#include <stdio.h>

int main(){

    int x = 10;
    int * p = &x;
    // printf("%d", *p);
    
    *p = 400;
    printf("%d", x);
    return 0;
}