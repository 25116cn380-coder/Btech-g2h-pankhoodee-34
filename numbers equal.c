#include <stdio.h>

int main() {
    int num1,num2;
    printf("enter the values of num1,num2");
    scanf("%d %d", &num1, &num2);
    if(num1==num2){
        printf("both numbers are equal");
    }
     else{ 
         printf("numbers are not equal");
    }
    return 0;
}