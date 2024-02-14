
import matplotlib.pyplot as plt
import numpy as np

def plot(file):
    with open(f"{file}","r") as f:
        data = f.readlines()
        
    coordinates = []
    print(*data)
    for i in data:
        d = i.split("\t")
        x = float(d[1][:-1])
        y = float(d[0])
        coordinates.append((x,y))
    
    xpoints = np.array([i[1] for i in coordinates])
    ypoints = np.array([i[0] for i in coordinates])

    plt.plot(xpoints, ypoints)
    plt.show()

    print(*coordinates,sep="\n")

plot("app.txt")