
def merge(l1,l2):
    l3 = []
    x,y = 0,0
    while x < len(l1) and y < len(l2):
        if (x == len(l1)) or (l1[x] < l2[y]):
            l3.append(l1[x])
            x += 1
        else:
            l3.append(l2[y])
            y += 1
    
    while x < len(l1):
        l3.append(l1[x])
        x += 1
    
    while y < len(l2):
        l3.append(l2[y])
        y += 1
        
    return l3

l1 =[1,3,5,7,9]
l2=[2,4,6,8]
print(merge(l1,l2))
    