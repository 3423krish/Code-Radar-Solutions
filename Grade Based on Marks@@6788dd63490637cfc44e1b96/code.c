#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a>=90){
        pritnf("A");
    }else if(a>=80 && a<90){
        pritnf("B");
    }else if(a>=70 && a<80){
        printf("C");
    }else if(a>=60 && a<70){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}