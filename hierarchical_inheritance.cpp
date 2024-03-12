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


int main(){
    B obB;
    obB.display();
    obB.display1();
    
    C obC;
    obC.display();
    obC.display2();
    
    D obD;
    obD.display();
    obD.display3();

    return 0;
}