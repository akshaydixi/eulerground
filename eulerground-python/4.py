#find the largest prime factor of a composite number
import sys
if len(sys.argv) == 1:
    n = 600951475143L
elif len(sys.argv) == 2:
    n = eval(sys.argv[1])
else:
    print "Usage : python 4.py <number>"
    exit(0)

if n % 2 == 0:
    n = n / 2
    lastFactor = 2
    while n % 2 == 0:
        n = n / 2
else:
    lastFactor = 1L

factor = 3L
while n > 1:
    if n % factor == 0:
        n = n / factor
        lastFactor = factor
        while n % factor == 0:
            n = n / factor
    factor = factor + 2L
print lastFactor

