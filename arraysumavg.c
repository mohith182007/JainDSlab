#include<stdio.h>
void main()
{
    int n, sum = 0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    avg = (float)sum / n;
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
}