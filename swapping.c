#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value of 1,2");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("after swapping");
    printf("a=%d",a);
    printf("b=%d",b);
    
    
    
    return 0;
}