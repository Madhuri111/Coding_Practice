
def fibonacci(n):
# first two terms
    n1, n2 = 0, 1
    count = 0

    if n == 1:
        print(n1)
    else:
        while count < n:
            print(n1)
            nth = n1 + n2
            n1 = n2
            n2 = nth
            count += 1

fibonacci(4)
