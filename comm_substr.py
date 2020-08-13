def substr(s1, s2):
    l = len(s1)
    res = 0
    for i in range(l):
        val = s1[i]
        for j in range(i+1,l):
            if val in s2:
                if len(val)>res:
                    res=len(val)
            val=val+s1[j]
    print(res)

x = "zxabcdezy"
y = "yzabcdezx"
substr(x,y)