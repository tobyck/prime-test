function pow(b, e, m) {
    var result = 1;
    for (var i = 0; i < e; i++) {
        result *= b;
        result %= m;
    } return result;
}

function test(n, k = 40) {
    if ((n % 2 == 0 && n > 2) || n < 2) return false;
    if ([2, 3].includes(n)) return true;
    var s = n - 1;
    for (var i = 0; i < k; i++) {
        var a = Math.floor(Math.random() * (n - 1)) + 1;
        if ([1, -1].includes(pow(a, s, n))) {
            continue;
        } else {
            return false;
        }
    } return true;
}
