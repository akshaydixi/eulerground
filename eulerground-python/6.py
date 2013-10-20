#largest palindrome from prouct of 2 3-digit numbers
def palin(num):
    strnum = str(num)
    if strnum == strnum[::-1]:
        return True
    return False
flag = True
for i in range(999,100,-1):
    if flag:
        for j in range(999,100,-1):
          if flag:
            if palin(i*j):
                print i*j
                flag = False
                break

