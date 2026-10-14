#include <stdio.h>
int main() {
    int a[100];
    int n, i, max;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    i = 1;
    while (i < n) {
        if (a[i] > max) {
            max = a[i];
        }

        i = i + 1;
    }
    printf("So lon nhat la: %d", max);

    return 0;
}

