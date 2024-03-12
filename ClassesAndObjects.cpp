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
int main() {
    
    Employee Rohan;

    // Rohan.a = 138 --> // this will throw error as a is private

    Rohan.d = 87;
    Rohan.e = 97;
    Rohan.SetData(10,20,30);
    Rohan.GetData();
    
    return 0;
}