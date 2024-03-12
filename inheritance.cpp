#include<iostream>
using namespace std;

    class Father{
        protected:
            string surname = "Kushwahar";
    };

    class Son1 : Father{
        string name = "Akhilesh";
        public:
        void show(){
            cout<<name<<" "<<surname<<endl;
        }
    };
    class Son2 : Father{
        string name = "Ankush";
        public:
        void disp(){
            cout<<name<<" "<<surname<<endl;
        }
    };
    
int main(){

    Son1 s1;
    s1.show();
    
    Son2 s2;
    s2.disp();

    return 0;
}