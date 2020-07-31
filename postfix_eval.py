def evaluate(opr, val1, val2):
    if opr=='+':
        return val1+val2
    elif opr=='-':
        return val1-val2
    elif opr=='*':
        return val1*val2
    elif opr=='/':
        return int(val1/val2)
    elif opr=='^':
        return val1**val2

def postfix(expr):
    stack = []
    opr = ['+','-','/','*','^']
    expr = expr.split(' ')
    for i in expr:
        if i in opr:
            b=stack.pop()
            a=stack.pop()
            c=evaluate(i,a,b)
            stack.append(c)
        else:
            stack.append(int(i))
    return stack.pop()


exp = "100 200 + 2 / 5 * 7 +"
res = postfix(exp)
print(res)
