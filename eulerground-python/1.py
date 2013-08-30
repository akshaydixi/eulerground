#Find sum of all multiples of 3 or 5 below 1000
#
#Complexity : O (n)
#

ans = 0
for i in range(1000):
    if i%5 == 0 or i%3 == 0:
        ans += i
print ans
