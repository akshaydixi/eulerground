#find sum of even valued terms in Fibonaci seq less than 4 million
#
#
#
from __future__ import division
from math import pow,sqrt
PHI = (1 + sqrt(5)) / 2
SHI = (1 - sqrt(5)) / 2
def fib(i):
    return (pow(PHI,i) - pow(SHI,i) ) / sqrt(5)

def main():
    i = 0
    fibno = 0
    ans = 0
    while fibno < 4000000:
        ans += fibno
        i+=3
        fibno = int(fib(i))
        
    print ans

if __name__ == '__main__':
    main()
