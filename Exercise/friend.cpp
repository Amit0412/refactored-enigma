#include<iostream>
using namespace std;
class code
{
private:
    int a;
public:
    code()
    {
        a=3;
    }
void showit()
{
    cout<<a<<endl;;
}
friend void showis(code &x);
};
void showis(code &x)
{
    x.a=5;
}
int main()
{
    code ob;
    ob.showit();
    //friend function calling now
    showis(ob);
    ob.showit();
    return 0;

}
