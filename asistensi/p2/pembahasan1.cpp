#include <stdio.h>

int main()
{
    /*
    notes:
    koordinat x persegi panjang A = xpA
    koordinat y persegi panjang A = ypA
    panjang persegi panjang A = ppA
    lebar persegi panjang A = lpA

    koordinat x persegi panjang B = xpB
    koordinat y persegi panjang B = ypB
    panjang persegi panjang B = ppB
    lebar persegi panjang B = lpB
    */

    float xpA, ypA, ppA, lpA, xpB, ypB, ppB, lpB;

    printf("=== Masukkan Keterangan Persegi Panjang A ===\n");
    printf("Koordinat X: ");
    scanf("%f", &xpA);
    printf("Koordinat Y: ");
    scanf("%f", &ypA);
    printf("Panjang: ");
    scanf("%f", &ppA);
    printf("Lebar: ");
    scanf("%f", &lpA);

    printf("\n");

    printf("=== Masukkan Keterangan Persegi Panjang B ===\n");
    printf("Koordinat X: ");
    scanf("%f", &xpB);
    printf("Koordinat Y: ");
    scanf("%f", &ypB);
    printf("Panjang: ");
    scanf("%f", &ppB);
    printf("Lebar: ");
    scanf("%f", &lpB);
    printf("\n");

    if (((xpA + ppA) >= xpB) && (xpA <= (xpB + ppB)) && ((ypA + lpA) >= ypB) && (ypA <= (ypB + lpB)))
    {
        printf("TABRAKAN!");
    }
    else
    {
        printf("AMAN");
    }
    return 0;
}