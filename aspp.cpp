#include<iostream>
using namespace std;
int add(int,int,int);
int main()
{
  int x,y,z;
  cout<<"Enter the value of x,y,z";
  cin>>x>>y>>z;
  add(x,y,z);
  return 0;
}
int add(int a,int b,int c)
{
  int sum;
  sum=a+b+c;
  cout<<"sum is ="<<sum;
}
