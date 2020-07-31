#include<iostream>
#define MAX 100
int arr[MAX];
int top=-1;

using namespace std;

void push(int c)
{
    if (top<MAX-1)
    {
        top+=1;
        arr[top]=c;
    }
    else
        cout<<"stack overflow"<<"\n";
    
}

int pop()
{
    if(top>=0)
    {
        int val = arr[top];
        top-=1;
        return val;
    }
    
}

int top_val()
{
    if(top>=0)
    {
        int val = arr[top];
        return val;
    }
}

void printNGE(int *ar, int n){
    push(ar[0]);

    for (int i = 1; i < n; i++)
    {
        if (top==-1)
        {
            push(ar[i]);
            continue;
        }

        while (top_val()<ar[i] && top!=-1)
        {
            int a = pop();
            cout<<a<<"-->"<<ar[i]<<"\n";
        }
        push(ar[i]);
    }
        while (top!=-1)
        {
            int b = pop();
            cout<<b<<"-->"<<-1<<"\n";
        }
    
}

int main() { 
  int arr[] = {11, 13, 21, 3}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  printNGE(arr, n); 
  return 0; 
}