def reverse(s):
    rev = 0
    while s < 0:
        k = s % 10
        rev = rev * 10 + k
        s //= 10
        
    print(rev)

reverse(123)