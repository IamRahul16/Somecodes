#include <iostream>
using namespace std;
int Partition(int *a, int s ,int e);

/*void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}*/
void quicksort(int *a, int s, int e){
    if(s<e){
        int pindex = Partition(a,s,e);
        quicksort(a,s,pindex-1);
        quicksort(a,pindex+1,e);
    }

}
int Partition(int *a, int s ,int e)
{
    int temp;
    int pivot = a[e];
    int pindex = s;
    for(int i=s;i<e;i++){
        if(a[i]<= pivot){
            //swap(&a[i],&a[pindex]);
            temp = a[i];
            a[i] = a[pindex];
            a[pindex] = temp;
            pindex++;
        }
    }
    //swap(&a[pindex],&a[e]);
    temp = a[pindex];
    a[pindex] = a[e];
    a[e] = temp;

    return pindex;
}
int main()
{
    int n,i, arr[50];
    cout << "Enter numbers to be entered : " << endl;
    cin >> n;
    cout << "Enter the elements below:\n";
    for(i=0;i<n;i++){
        cin>> arr[i];
    }
    quicksort(arr,0,n-1);

    cout<< "Sorted array is: " << endl;
    for(i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}
