#include<iostream>
#include<vector>

using namespace std;

void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}
void insertionSort1(int n, int arr[]) {
    int key = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>key && i>0){
            arr[i+1]=arr[i];
            printArray(arr,n);
        }
        else if(i==0)
            arr[i]
        else{
            arr[i+1]=key;
            printArray(arr,n);
            break;
        }

    }
}

int main()  
{  
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    int n = 10;  
    insertionSort1(n, arr); 
    return 0;  
}  