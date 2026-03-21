#include <stdio.h>

int main() {
    int a,b,c;
    printf("entre the value of a,b,c");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("a is the largest");
    }
    if(b>a && b>c){
        printf("b is the largest");
    }   
    if(c>a && c>b){
        printf("c is the largest");
    }
    return 0;
}