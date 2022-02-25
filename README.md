## prime_test

This module provides the function `test(n)` that returns `True` if `n` is a prime number, and `False` if it is composite (note that this test is probabilistic so that it can test extremely large numbers very fast for RSA). The function also has an optional variable `k` (defaults to 40) which is the iterations of the test, more information on that can be found [here](https://crypto.stanford.edu/pbc/notes/numbertheory/millerrabin.html#_the_miller_rabin_test). Below is an example of how to use the module. Intall using `pip install prime_test`

```python
from prime_test import prime
prime.test(167)
```

(And I made in four other languages just becasue why not)
