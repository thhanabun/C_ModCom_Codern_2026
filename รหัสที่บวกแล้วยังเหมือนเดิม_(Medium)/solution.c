#include <stdio.h>

int f[505];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }

    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            int left = f[(a + b) % n];
            int right = (f[a] + f[b]) % n;

            if (left != right) {
                printf("false");
                return 0;
            }
        }
    }

    printf("true");
    return 0;
}
