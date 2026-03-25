#include<stdio.h>
void main()
{
    int n, i, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: %d, %d",a,b);
    for(i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;

    }
}