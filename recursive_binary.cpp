#include<iostream>
using namespace std;

int binarySearch(int a[],int low,int high,int x)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;

        if(a[mid] == x)
            return mid;

        else if(a[mid]<x)
        {
            return binarySearch(a,mid+1,high,x);
        }
        
        else
        {
            return binarySearch(a,low,mid-1,x);
        }

    }
    return -1;
}

int main()
{
    int i,x;
    int arr[] = {12,23,46,50,66,98}; //array should be sorted for binary search
    //cout<< "Enter length of array "; cin >> n;
    cout<< "Elements in array are: \n";
    for(i=0;i<6;i++)
    {
        cout<< arr[i]<<"\t";
    }
    cout<<"\nEnter number to be searched: \n";
    cin>> x;

    int index = binarySearch(arr,0,5,x);

    if(index != -1)
    {
         cout<< "\n" << x << " is at" << " index " << index;
    }
    else
    {
        cout<< "Number is not in the given array" ;
    }

return 0;
}
