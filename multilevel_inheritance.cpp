#include<iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"I' am class A"<<endl;
        }
};

class B : public A{
    public:
        void show(){
            cout<<"I' am class B"<<endl;
        }
};

class C : public B{
    public:
        void display1(){
            cout<<"I' am class C"<<endl;
        }
};

int main(){
    C ob;
    
    ob.display();
    ob.show();
    ob.display1();
    return 0;
}