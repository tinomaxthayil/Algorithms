#include<iostream>

using namespace std;

void merge(int *arr, int low, int mid, int high){

    int i,j,k,temp[high-low+1];
    i = low;
	k = 0;
	j = mid + 1;
 
    while(i<=mid && j<=high){
        if (arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;     
    }
    
    while (i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }

    while (j<=high)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    
    for(i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(int *arr, int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);

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
 
	mergeSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<" "<<arr[i];
    cout<<"\n";
 
	return 0;
}