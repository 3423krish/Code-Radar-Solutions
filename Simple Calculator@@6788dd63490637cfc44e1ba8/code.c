#include <stdio.h>
int main() {
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
    switch (operator){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            if (b==0){
                printf("error");
            }else{
                printf("%d",a/b);
            }
            break;
        default:
        printf("error");      
    }
    return 0;
}