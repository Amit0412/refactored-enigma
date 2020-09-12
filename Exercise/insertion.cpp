#include<iostream>
using namespace std;
int main()
{
    int n,pos,elements,arr[10];
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"original array is";
    for(int j=0;j<6;j++)
    {
        cout<<arr[j];
    }
    cout<<"enter the element you want to insert";
    cin>>elements;
    cout<<"enter the position you want to enter";
    cin>>pos;
    for(int k=n-1;k>=pos;k--)
    {
        arr[k+1]=arr[k];
    }
    arr[pos]=elements;
    n=n+1;
    cout<<"after insertion array";
    for(int z=0;z<n;z++)
    {
        cout<<arr[z];
    }
    return 0;
}
