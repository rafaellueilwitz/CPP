#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"Super class A"<<endl;
        }
};
class B
{
    public:
        void display1()
        {
            cout<<"Super class B"<<endl;
        }
};
class C
{
    public:
        void display2()
        {
            cout<<"Super class C"<<endl;
        }
};

class D : public A, public B, public C
{
    public:
        void show()
        {
            cout<<"Sub Class D"<<endl;
        }
};

int main(){

    D ob;

    ob.display();
    ob.display1();
    ob.display2();
    ob.show();
    
    return 0;
}