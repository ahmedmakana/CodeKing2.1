# Check if 'n' is prime or not
def isPrime(n):
    i = 2
    while i*i < n:
        if n % i ==0 :
            return 'NO'
    return 'YES'
# Get inputs
T = int(input())
for _ in range(T):
    n = int(input())
    # print answer
    print(isPrime(n))