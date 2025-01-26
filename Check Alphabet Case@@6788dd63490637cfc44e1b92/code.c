#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if (a<=75 && a>=200){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}