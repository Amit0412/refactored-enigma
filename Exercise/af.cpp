#include <iostream>

using namespace std;

class add
{


int a;
int b;
void assign()
{
int sum;
sum=a+b;
}
public:
    void enter()
    {
        cout<<"enter a";
        cin>>a;
        cout<<"enter b";
        cin>>b;
        assign();
    }
    void display()
    {

        cout<<a+b;

    }
};
int main()
{

    add ob1;
    ob1.enter();
    ob1.display();
    return 0;
}
