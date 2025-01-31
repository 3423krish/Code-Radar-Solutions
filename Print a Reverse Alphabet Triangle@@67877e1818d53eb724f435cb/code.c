#include <stdio.h>
#include <ctype.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        char ch='A';
        for(char j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}