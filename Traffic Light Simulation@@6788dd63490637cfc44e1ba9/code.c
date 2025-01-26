#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    a=toupper(a);
    if(a=='R'){
        printf("Stop");
    }else if(a=='G'){
        printf("Go");
    }else if(a=='Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
    return 0;
}