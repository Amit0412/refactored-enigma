#include<iostream>
using namespace std;
int main()
{
    int n,arr[15];
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array you entered";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
    for(int k=0;k<n;k++)
    {
        for(int m=0;m<n-1;m++)
        {
            if(arr[m]>arr[m+1])
            {
                int temp=arr[m];
                arr[m]=arr[m+1];
                arr[m+1]=temp;
            }
        }
    }
    cout<<"sorted array is";
    for(int h=0;h<n;h++)
    {
        cout<<arr[h];
    }
    return 0;
}
