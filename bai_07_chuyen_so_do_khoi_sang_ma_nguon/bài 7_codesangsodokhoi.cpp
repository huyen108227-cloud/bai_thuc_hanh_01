#include <stdio.h>
int main()
{
    float a, b, c;

    printf("Nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            printf("Tam giac deu.");
        else
            if (a == b || b == c || a == c)
                printf("Tam giac can.");
            else
                printf("Tam giac thuong.");
    }
    else
    {
        printf("Khong la tam giac.");
    }

    return 0;
}
