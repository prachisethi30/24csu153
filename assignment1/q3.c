#include <stdio.h>
int main() {
    int n1, n2;
    int sub;
    printf("Enter the 1ST Integer --> ");
    scanf("%d", &n1);
    printf("Enter the 2ND Integer --> ");
    scanf("%d", &n2);
  
    sub = n1+ ~n2 + 1;
    
    printf("%d-%d = %d",num1,num2,sub);
    return 0;
