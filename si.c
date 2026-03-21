#include <stdio.h>
#include<math.h>
int main() {
    float p,r,t,si,ci,a;
    printf("enter value of p,r,t,");
    scanf("%f %f %f", &p, &r, &t);
    si=(p*r*t)/100;
    printf("simple interest= %f", si);
    a=p*pow((1+r/100),t);
    printf("amount =%f", &a);
    ci=a-p;
    printf("compound interest=%f", ci);
    

    return 0;
}