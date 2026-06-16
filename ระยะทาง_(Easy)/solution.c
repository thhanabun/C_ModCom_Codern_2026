#include <stdio.h>

double square_root(double value) {
    if (value == 0.0) {
        return 0.0;
    }

    double guess = value;
    for (int i = 0; i < 60; i++) {
        guess = (guess + value / guess) / 2.0;
    }

    return guess;
}

long long absolute_value(long long x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main() {
    long long x1, y1, x2, y2;
    scanf("%lld %lld", &x1, &y1);
    scanf("%lld %lld", &x2, &y2);

    long long dx = x2 - x1;
    long long dy = y2 - y1;

    double euclidean = square_root((double)(dx * dx + dy * dy));
    long long manhattan = absolute_value(dx) + absolute_value(dy);

    printf("Euclidean: %.2f\n", euclidean);
    printf("Manhattan: %lld", manhattan);

    return 0;
}
