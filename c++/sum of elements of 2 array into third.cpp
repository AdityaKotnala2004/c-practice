#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++)
	{
        cout<<"enter elements of array 1: ";
        cin>>arr1[i];    
    }
    cout<<endl;
    int arr2[n];
    for(i=0;i<n;i++)
	{
        cout<<"enter elements of array 2: ";
        cin>>arr2[i];
    }
    cout<<endl;
    int arr3[n];
    for(i=0;i<n;i++)
	{
        arr3[i]=arr1[i]+arr2[i];
        cout<<"elements of array 3 are: "<<arr3[i]<<endl;
    }
}
