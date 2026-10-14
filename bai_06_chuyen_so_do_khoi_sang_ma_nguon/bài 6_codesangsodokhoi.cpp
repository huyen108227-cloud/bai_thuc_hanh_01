#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, P, S;

    printf("Nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        P = (a + b + c) / 2;
        S = sqrt(P * (P - a) * (P - b) * (P - c));

        printf("Dien tich tam giac S = %.2f\n", S);
        printf("Chu vi tam giac = %.2f\n", 2 * P);
    }
    else
    {
        printf("Ba canh khong tao thanh tam giac!");
    }

    return 0;
}
