#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, p, s;

    for (int i = 1; i <= 10; i++)
    {
        printf("Nhap bo so thu %d (a, b, c): ", i);
        scanf("%f%f%f", &a, &b, &c);

        if (a + b > c && b + c > a && a + c > b)
        {
            p = (a + b + c) / 2;
            s = sqrt(p * (p - a) * (p - b) * (p - c));

            printf("Tam giac thu %d: Dien tich = %.2f, Chu vi = %.2f\n",
                   i, s, p * 2);
        }
        else
        {
            printf("Bo so thu %d khong tao thanh tam giac.\n", i);
        }
    }

    return 0;
}
