#include <stdio.h>
int main() {
    int radius;
    float area;
    const float PI = 3.14;
    scanf("%d",&radius);
    area = PI * radius * radius;
    printf("Area: %.2f" ,area);
    return 0;
}