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

int main(){
    string s = "abcdefg";
    string new_str;
    for(int i=0;i<s.length();i++){
        push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        char a =pop();
        new_str+=a;
    }
    cout<<new_str<<"\n";
}
