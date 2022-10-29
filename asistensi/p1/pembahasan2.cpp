#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    // scanf("%d %d", &a, &b);
    // scanf("%d %d", &c, &d);
    // printf("\n");
    // printf("%d %d\n", a + 69, c + 69);
    // printf("%d %d\n", b + 69, d + 69);
    printf("Masukkan Matrix Awal:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);
    scanf("%d %d %d %d", &i, &j, &k, &l);
    scanf("%d %d %d %d", &m, &n, &o, &p);
    printf("\n");
    printf("Matrix Hasil Transpose:\n");
    printf("%d %d %d %d\n", a + 69, e + 69, i + 69, m + 69);
    printf("%d %d %d %d\n", b + 69, f + 69, j + 69, n + 69);
    printf("%d %d %d %d\n", c + 69, g + 69, k + 69, o + 69);
    printf("%d %d %d %d\n", d + 69, h + 69, l + 69, p + 69);
    /* code */
    return 0;
}

// a b c d
// e f g h
// i j k l
// m n o p

// a e i m
// b f j n
// c g k o
// d h l p