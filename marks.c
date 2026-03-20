#include <stdio.h>

int main() {
    int a,b,c,d,e;
    int f;
    float g;
    printf("enter the marks of five subject a,b,c,d,e");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    f=(a+b+c+d+e);
    g=(((a+b+c+d+e)/500)*100);
    printf("the sum is=%d, &f");
    printf("the percentage is =%d", &g);
    return 0;
}