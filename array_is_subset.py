def is_subset(arr1, arr2):
    hmap = {}

    for i in arr1:
        try:
            hmap[i]+=1
        except:
            hmap[i]=1
    for j in arr2:
        if j in hmap.keys() and hmap[j]>0:
            hmap[j]-=1
        else:
            return False
    return True
