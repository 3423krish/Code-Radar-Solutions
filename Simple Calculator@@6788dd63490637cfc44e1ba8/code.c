#include <stdio.h>

int main() {
    int a,b,d,e,f,g;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    d=a+b;
    e=a-b;
    f=a*b;
    g=b/a;
    if (c=='+'){
        printf("%d",(d));
    }else if(c=='-'){
        printf("%d",(e));
    }else if(c=='*'){
        printf("%d",(f));
    }else if(c=='/'){
        printf("%d",(g));
    }else{
        printf("error");
    }
    return 0;
}