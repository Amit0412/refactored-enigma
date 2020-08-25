#include <iostream>

using namespace std;

class base
{
public:
    int a;
    int b;
    void enterdetails()
    {
      cout<<"Enter the value of a";
      cin>>a;
      cout<<"Enter the value of b";
      cin>>b;
      calculate();
    }
    void showdetails()
    {
        cout<<a<<endl;;
        cout<<b<<endl;;
    }
    void calculate()
    {
        if(a>b)
        {
            cout<<"Larger"<<endl;;
        }
        else{
            cout<<"smaller"<<endl;;
        }
    }
};
class derived:public base
{
public:
    int multiply;
    int c;
    int d;
    void multiplication()
    {
        cout<<"Enter the value of c";
        cin>>c;
        cout<<"Enter the value of d";
        cin>>d;
        result();
    }
    void result()
    {
        cout<<"multiplyg"<<c*d;
    }
};
int main()
{
    base ob1;
    ob1.enterdetails();
    ob1.showdetails();
    derived ob2;
    ob2.multiplication();
    ob2.result();
    return 0;
}
