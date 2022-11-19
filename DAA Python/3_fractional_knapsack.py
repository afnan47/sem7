def fractional_knapsack():
    weights=[10,20,30]
    values=[60,100,120]
    capacity=50
    res=0
    # Pair : [Weight,value]
    for pair in sorted(zip(weights,values), key= lambda x: x[1]/x[0], reverse=True):
        if capacity<=0: # Capacity completed - Bag fully filled 
            break 
        if pair[0]>capacity: # Current's weight with highest value/weight ratio Available Capacity
            res+=int(capacity * (pair[1]/pair[0]))  # Completely fill the bag
            capacity=0
        elif pair[0]<=capacity: # Take the whole object
            res+=pair[1]
            capacity-=pair[0]
    print(res)        

if __name__=="__main__":
    fractional_knapsack()