#include <stdio.h>

int main() {
    int radius;
    float area;
    int square;
    scanf("%d",&radius);
    square= radius ** 2;
    area=3.14*square;
    printf("Area: %.2f",area);
    return 0;
}