#include<iostream>
using namespace std;
int main()
{
    int arr1[10],arr2[10],arr3[10],n1,n2,m,index=0;
    cout<<"Enter n1";
    cin>>n1;
    cout<<"Enter array one";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"array 1 is";
    for(int j=0;j<n1;j++)
    {
        cout<<arr1[j];
    }
    cout<<"enter n2";
    cin>>n2;
    cout<<"Enter array 2";
    for(int k=0;k<n2;k++)
    {
        cin>>arr2[k];
    }
    cout<<"array 2 is";
    for(int l=0;l<n2;l++)
    {
        cout<<arr2[l];
    }
    m=n1+n2;
    for(int m=0;m<n1;m++)
    {
        arr3[index]=arr1[m];
        index++;
    }
    for(int n=0;n<n2;n++)
    {
        arr3[index]=arr2[n];
        index++;
    }
    cout<<"merged array is";
    for(int p=0;p<m;p++)
    {
        cout<<arr3[p];
    }
    return 0;


}
