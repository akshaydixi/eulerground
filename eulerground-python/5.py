#Smallest positive number evenly divisible by 1 to 20
from sys import argv
def gcd(a,b):
    a,b = max(a,b),min(a,b)
    if a % b == 0: return b
    else: return gcd(b,a%b)

def lcm(a,b):
    return a*b/gcd(a,b)

def main(n):
    res = 1
    for i in range(1,n+1):
        res = lcm(res,i)
    print res
if __name__ == '__main__':
    if len(argv) == 2:
        main(eval(argv[1]))
    elif len(argv) > 2 :
        print "Usage : python 5.py <upper natural number limit>"
    else:
        main(20)

