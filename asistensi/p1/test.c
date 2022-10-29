#include <stdio.h>
#include <math.h>

int main()
{
    // ax2 + bx + c
    /* code */
    int b, a, c;
    float x1, x2;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("akar 1: %f", x1);
    printf("\n");
    printf("akar 2: %f", x2);
    printf("\n");
    // return 0;
}
