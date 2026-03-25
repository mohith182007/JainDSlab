#include<stdio.h>

int gcdRec(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return b;
    }
    return gcdRec(b, a % b);
}

void main() {
    int a, b, result;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    result = gcdRec(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);
}