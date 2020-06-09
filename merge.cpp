#include<iostream>
using namespace std;

void merge(int *a,int l,int mid,int h);

void mergesort(int *a,int l,int h)
{
    int mid;
    if(l<h)
    {
        mid= (h+l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

void merge(int *a,int l,int mid,int h )
{
    int i,j,k,temp[h-l+1];
    i=l;
    j=mid+1;
    k=0;

    while(i<= mid && j<=h)
    {

        if(a[i] <= a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }

    }
    while(i<=mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=h)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

 for(i=l;i<=h;i++)
    {
        a[i]=temp[i-l];
    }
}

int main()
{
    int n,i,arr[50];
    cout<< "Enter the number of element in the array: " << endl;
    cin>> n;
    cout<< "Enter elements:\n";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    mergesort(arr,0,n-1);

    //sorted data
    cout<< "Sorted Data is:\n" ;
    for(i=0;i<n;i++)
    {
        cout<< arr[i] << "\t" ;
    }
    return 0;
}
