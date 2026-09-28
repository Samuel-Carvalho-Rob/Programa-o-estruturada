#include "arithmetic.h"
#include "stdio.h"


int main(){
    int a = 10;
    int b = 20;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\,", add(a,b));
    printf("%d\n", subtract(a,b));
    
    
    return 0;
}