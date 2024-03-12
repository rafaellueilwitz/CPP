#include<iostream>

using namespace std;

int a = 15; // Global Variable = the variable those are decleared outside the block

int main(){

    int a = 10; // local variable : the variable those are decleared inside the block.

    cout<<"Value of local Variable : "<<a<<endl;
    cout<<"Value of Global Variable : "<<::a<<endl;

    // Change in Global Variable
    ::a = 30;
    cout<<"Changed Value of Global Variable : "<<::a<<endl;

    return 0;
}