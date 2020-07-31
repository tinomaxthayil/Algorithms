#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int partition(int *arr, int low, int high){
    int pivot = high;
    int i = low;

    for(int j=low;j<high;j++){
        if (arr[j]<arr[pivot])
        {
            swap(&arr[i],&arr[j]);
            i++;
        }   
    }
    swap(&arr[i],&arr[pivot]);
    return i;
}

void quickSort(int *arr, int low, int high){
    if(low<high){
        int piv = partition(arr,low,high);
        quickSort(arr,low,piv-1);
        quickSort(arr,piv+1,high);
    }
}

int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	quickSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<" "<<arr[i];
    cout<<"\n";
 
	return 0;
}