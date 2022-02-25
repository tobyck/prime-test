#include <stdio.h>
#include <stdlib.h>

int power(b, e, m) {
    int result = 1;
    for (int i = 0; i < e; i++) {
        result *= b;
        result %= m;
    } return result;
}

int test(n) {
    if ((n % 2 == 0 && n > 2) || n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    int s = n - 1;
    for (int i = 0; i < 40; i++) {
        int a = rand() % (n - 1) + 1;
        if (power(a, s, n) == 1 || power(a, s, n) == -1) {
            continue;
        } else {
            return 0;
        }
    } return 1;
}
