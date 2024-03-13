#include <iostream>

using namespace std;

class Employee
{
    private: 
        int a,b,c;
    public:  
        int d,e;
        void SetData(int a,int b,int c);

        void GetData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }

};

void Employee :: SetData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

class A
{
    private:
        void show()
        {
            cout<<"Inside private A Class"<<endl;
        }
    public:
        void show1()
        {
            cout<<"Inside public A Class"<<endl;
        }       
    protected:
        void show2()
        {
            cout<<"Inside protacted A Class"<<endl;
        }
};

class B : private A // ====>  class A public and protacted are accessible from class B
{
    private:
        void display()
        {
            cout<<"Inside private B Class"<<endl;
        }
    public:
        void display1()
        {
            cout<<"Inside public B Class"<<endl;
            show1();
            display2();
            
        }
    protected:
        void display2()
        {
            cout<<"Inside protacted B Class"<<endl;
            show2();
        }
};
class Base { 
private: 
	int pvt = 1; 

protected: 
	int prot = 2; 

public: 
	int pub = 3; 

	// function to access private member 
	int getPVT() { return pvt; } 
}; 

class PublicDerived : public Base { 
public: 
	// function to access protected member from Base 
	int getProt() { return prot; } 
}; 
int main() {
    // Employee Rohan;

    // // Rohan.a = 138 --> // This will throw error as a is private
    // Rohan.d = 87;
    // Rohan.e = 97;
    // Rohan.SetData(10,20,30);
    // Rohan.GetData();

    // B obB;
    // obB.display1();
    
    PublicDerived object1; 
	cout << "Private = " << object1.getPVT() << endl; 
	cout << "Protected = " << object1.getProt() << endl; 
	cout << "Public = " << object1.pub << endl; 
    return 0;
}