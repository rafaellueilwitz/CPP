#include<iostream>
using namespace std;

class A
{

    public:
        void display()
        {
            cout<<"Super Class A"<<endl;
        }
};
class B : public A
{
    public:
        void display1()
        {
            cout<<"Sub Class B"<<endl;
        }
};
class C : public A
{
    public:
        void display2()
        {
            cout<<"Sub Class C"<<endl;
        }
};
class D : public A
{
    public:
        void display3()
        {
            cout<<"Sub Class D"<<endl;
        }
};

class E : public B, public C, public D
{
    public:
        void display4()
        {
            cout<<"Sub Class E"<<endl;
        }
};
int main(){
    
    E obE;
    C obC;
    obC.display();

    obE.display1();
    obE.display2();
    obE.display3();
    obE.display4();

    return 0;
}
