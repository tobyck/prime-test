def power(b, e, m)
    result = 1;
    for i in 0..e - 1
        result *= b;
        result %= m;
    end
    return result;
end

def test(n, k = 40)
    if (n % 2 == 0 and n != 2) or n < 2
        return false;
    elsif [2, 3].include? n
        return true;
    end
    s = n - 1
    for i in 0..k - 1
        a = rand(2..n - 1)
        if [1, -1].include? power(a, s, n)
            next
        else
            return false
        end
    end
    return true
end
