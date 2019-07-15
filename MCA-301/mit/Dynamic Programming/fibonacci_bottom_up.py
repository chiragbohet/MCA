def fibonacci(n):
    fib={}

    for k in range (1,n+1):
        if k<=2:
            f=1
        else:
            f = fib[k-1]+fib[k-2]
        fib{k:f}

    return fib.get(n)

print(fibonacci(5))
