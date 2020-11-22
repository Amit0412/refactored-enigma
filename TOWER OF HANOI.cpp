#include<iostream>
using namespace std;
void towerofhanoi(int n,char beg,char end,char aux)
{
    if(n==1)
    {
        cout<<"Move disk 1 from"<<" "<<"rod"<<beg<<" "<<"to"<<" "<<"rod"<<" "<<end<<endl;
        return;
    }
    towerofhanoi(n-1,beg,aux,end);
    cout<<"Move disk"<<" "<<n<<" "<<"from rod"<<" "<<beg<<" "<<"to rod"<<" "<<end<<endl;
    towerofhanoi(n-1,aux,end,beg);
    
}
int main()
{
    int n=3;
    towerofhanoi(3,'A','C','B');
    return 0;
}
