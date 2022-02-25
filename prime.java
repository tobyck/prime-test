class Main {
    static int power(int b, int e, int m) {
        int result = 1;
        for (int i = 0; i < e; i++) {
            result *= b;
            result %= m;
        } return result;
    }
    static boolean test(int n) {
        if ((n % 2 == 0 && n > 2) || n < 2) return false;
        if (n == 2 || n == 3) return true;
        int s = n - 1;
        for (int i = 0; i < 40; i++) {
            int a = (int) Math.random() * (n - 2) + 2;
            if (power(a, s, n) == 1 || power(a, s, n) == -1) {
                continue;
            } else {
                return false;
            }
        } return true;
    }
}
