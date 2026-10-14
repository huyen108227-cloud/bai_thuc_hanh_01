#include<stdio.h> 
int main() {
    int a, b;
    int x;
    printf("Nhap hai so nguyen duong a va b: ");
    scanf("%d%d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong");
        return 0;
    }
    if (a > b) {
        x = a;
    } else {
        x = b;
    }
    while (x % a != 0 || x % b != 0) {
        x++;
    }
    printf("BCNN cua %d va %d la: %d", a, b, x);

    return 0;
}

