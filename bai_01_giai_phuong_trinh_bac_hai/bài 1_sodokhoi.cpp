#include<stdio.h>
#include<math.h> 
int main() {
    double a, b, c, delta;
    double x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem");
            } else {
                printf("Phuong trinh vo nghiem");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh co 1 nghiem: x = %.2lf", x1);
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem thuc");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2lf", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Nghiem x1 = %.2lf\n", x1);
            printf("Nghiem x2 = %.2lf", x2);
        }
    }

    return 0;
}

