def substr_dp(s1, s2):

    dp_arr = [[0 for i in range(len(s1)+1)] for j in range(len(s2)+1)]

    mlen = 0
    il = 0
    jl = 0
    res = ""

    for i in range(len(s1)+1):
        for j in range(len(s2)+1):
            if(i==0 or j==0):
                dp_arr[i][j]=0
            elif(s1[i-1]==s2[j-1]):
                dp_arr[i][j]=dp_arr[i-1][j-1]+1
                if mlen<dp_arr[i][j]:
                    mlen=dp_arr[i][j]
                    il=i
                    jl=j
            else:
                dp_arr[i][j]=0
    
    print("Max length of substr = %", mlen)
    while dp_arr[il][jl]!=0:
        res+=s1[il-1]
        il-=1
        jl-=1
    print(res[::-1])

x = "zxabcdezy"
y = "yzabcdezx"
substr_dp(x,y)
