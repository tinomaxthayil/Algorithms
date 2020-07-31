#include<iostream>
#define MAX 100
char arr[MAX];
int top=-1;

using namespace std;

void push(char c)
{
    if (top<MAX-1)
    {
        top+=1;
        arr[top]=c;
    }
    else
        cout<<"stack overflow"<<"\n";
    
}

char pop()
{
    if(top>=0)
    {
        char val = arr[top];
        top-=1;
        return val;
    }
    
}

char top_val()
{
    if(top>=0)
    {
        char val = arr[top];
        return val;
    }
}

char pair_char(char c){
    if(c==')')
        return '(';
    else if(c==']')
        return '[';
    else if(c=='}')
        return '{';
    else
        return '0';
    
}

void paranthesis(string exp){
    push('N');
    for(int i=0;i<exp.length();i++){
        if (exp[i]=='('||exp[i]=='['||exp[i]=='{')
            push(exp[i]);
        else if(pair_char(exp[i])==top_val())
            char ch = pop();
        else
            push(exp[i]);
    }
    if (top_val()=='N')
        cout<<"Balanced"<<"\n";
    else
        cout<<"Not Balanced"<<"\n";    
}

int main()
{
    string exp = "[()]{}{[()()]()}";
    paranthesis(exp);

}