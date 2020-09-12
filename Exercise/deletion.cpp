include<iostream>
using namespace std;
int main()
{
    int n,pos,arr[10];
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"original array is";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
    cout<<"Enter the position from where you want to delete";
    cin>>pos;
    for(int k=pos;k<n-1;k++)
    {
        arr[k]=arr[k+1];
    }
    n=n-1;
    cout<<"array is";
    for(int h=0;h<n;h++)
    {
        cout<<arr[h];
    }
    return 0;

}
