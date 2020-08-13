def substr(s):
    l = len(s)
    sub = []
    for i in range(l):
        val = s[i]
        sub.append(val)
        for j in range(i+1,l):
            val=val+s[j]
            sub.append(val)
    print(sub)
    print(len(sub))

substr("abc")