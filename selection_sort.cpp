#include<iostream>
using namespace std;

void selectionSort(int *a,int n)
{
    int i,j,imin;
    for(i=0;i<=n-2;i++)
    {
        imin = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[imin])
            {
                imin = j;
            }
        }
        int temp = a[i];
        a[i]= a[imin];
        a[imin] = temp;

    }
    
}
int main()
{
    int a[50],n,i;
    cout<< "Enter the total numbers:\n" ;
    cin >> n;
    cout<< "Enter the elements in the array:\n";
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    selectionSort(a,n);
    cout<< "Sorted array is:\n";
     for(i=0;i<n;i++)
        {
            cout<<a[i] <<"\t";
        }
return 0;
}
