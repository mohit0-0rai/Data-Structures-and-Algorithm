import math

sieve = [0 for i in range(10**8)]
def gcd(a, b):
    while a > 0 and b > 0:
        a %= b;
        temp = a;
        a = b;
        b = temp;
    return a if a > 0 else b;

def findSmallestPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        print(i+"\n")
        if (sieve[i] == 0):
            if (n % i == 0):
                return i;
            else:
                for j in range(i*i, int(math.sqrt(n)) + 1, i):
                    sieve[j] = 1;
    return n;

a, b = (int(x) for x in str(input()).split(" "))
res = gcd(a, b);
if res == 1:
    print(-1)
else:
    print(findSmallestPrime(res))

