#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
int temp,i,j;
cout<< "Sorted array is :"<< endl;
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j+1]<a[j]){
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}
for (i=0;i<n;i++){
    cout << a[i] << '\t';
}
}

int main()
{
int a[100],n,temp,i,j;
cout << "Enter the number of elements"<< endl;
cin >> n ;
cout<< "Enter the values in array:"<< endl;

for (i=0;i<n;i++){
        cin >> a[i];
}

bubblesort(a,n);

return 0;
}
