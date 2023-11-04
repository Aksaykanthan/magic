
from random import uniform
import matplotlib.pyplot as plt
import numpy as np

def area(n):
    c = 0
    t = n
    cir_x,cir_y = [],[]
    sq_x,sq_y =[],[]
    
    for _ in range(n):
        x = uniform(0, 1)
        y = uniform(0, 1)
        dist = (x-0.5)**2 + (y-0.5)**2
        if dist <= 0.25:
            cir_x.append(x)
            cir_y.append(y)
            c += 1
        else:
            sq_x.append(x)
            sq_y.append(y)
    
    #circle
    x = np.array(cir_x)
    y = np.array(cir_y)
    plt.scatter(x, y)
    
    #square
    x = np.array(sq_x)
    y = np.array(sq_y)
    plt.scatter(x, y)
    plt.show()

    return (c/t)


print(area(100000)) 