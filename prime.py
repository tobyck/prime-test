import random
def test(n, k = 40):
    if n < 2 or n % 2 == 0: return False
    if n in [2, 3]: return True
    s = n - 1
    for _ in range(k):
        a = random.randrange(2, n - 1)
        x = pow(a, s, n)
        if x in [1, -1]:
            continue
        else:
            return False
    return True
