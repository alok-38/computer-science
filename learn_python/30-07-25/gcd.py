def gcd(u, v):
    while v != 0:
        u, v = v, u % v
    return u

