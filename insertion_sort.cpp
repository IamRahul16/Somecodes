#include<iostream>
using namespace std;

void insertionSort(int *a, int n)
{
    int temp,i,j;
    for( i=1;i<n;i++)
    {
        temp = a[i];
        j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int i,arr[50],n;
    cout<< "Enter numbers: \n";
    cin >> n;
    cout<< "\nEnter the elements in the array: \n";
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    insertionSort(arr,n);

    //sorted array
    cout<< "\nSorted array is :\n";
    for(i=0;i<n;i++)
    {
        cout<< arr[i] << "\t";
    }
    return 0;
}
