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


int prec(char c){
    if (c=='^')
        return 3;
    else if (c=='*'||c=='/')
        return 2;
    else if (c=='+'||c=='-')
        return 1;
    else
        return 0;
    
}

string infix_postfix(string s){
    int l=s.length();
    string new_str; 
    push('N');
    for(int i=0;i<l;i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')) 
            new_str+=s[i];

        else if (s[i]=='(')
            push('(');
        
        else if (s[i]==')')
        {
            while (top_val()!='N' && top_val()!='(')
            {
                char ch = pop();
                new_str+=ch;
            }
            if(top_val() == '(') 
            { 
                char ch= pop();
            }
            
        }
        else
        {
            while (prec(s[i])<=prec(top_val()) && top_val()!='N')
            {
                char c = pop();
                new_str+=c;
            }
            push(s[i]);
            
        }
    }
    while (top>0)
    {
        char c = pop();
        new_str+=c;
    }
    
    return new_str;
}

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    string new_str = infix_postfix(exp);
    cout<<new_str<<"\n";

}
