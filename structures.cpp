#include<iostream>

using namespace std;

// struct employee
// {
//     int eid;
//     string name;
//     float salary;
// };

typedef struct employee
{
    int eid;
    string name;
    float salary;
}ep;

typedef struct students
{
    int sid;
    string name;
    int rollno;
}stud;

union money // A union is a data structure that allows you to store multiple data types in  the same memory location. It is used when you need to access different parts of the same data item.
{
    int rice;
    int car;
    int pounds;
};


int main(){

    cout<<"----------------------"<<endl;
    ep Shubham;
    Shubham.eid = 101;
    cout<<Shubham.eid<<endl;
    Shubham.name = "Shubham";
    cout<<Shubham.name<<endl;
    Shubham.salary = 10000000;
    cout<<Shubham.salary<<endl;
    cout<<"----------------------"<<endl;

    cout<<"----------------------"<<endl;
    struct employee Rohan;
    Rohan.eid = 102;
    cout<<Shubham.eid<<endl;
    Rohan.name = "Rohan";
    cout<<Shubham.name<<endl;
    Rohan.salary = 10002000;
    cout<<Shubham.salary<<endl;
    cout<<"----------------------"<<endl;

    cout<<"----------------------"<<endl;
    stud Siddharth;
    Siddharth.sid = 5635;
    cout<<Siddharth.sid<<endl;
    Siddharth.name = "Siddharth";
    cout<<Siddharth.name<<endl;
    Siddharth.rollno = 27;
    cout<<Siddharth.rollno<<endl;
    cout<<"----------------------"<<endl;

    union money m1;
    m1.rice = 10;
    m1.pounds = 30;
    m1.car = 20;

    // cout<<m1.rice<<endl;       // Output 20
    // cout<<m1.car<<endl;        // Output 20
    // cout<<m1.pounds<<endl;     // Output 20


    enum Meal{breakfast, lunch, dinner}; // You can use an enum as a type in your code, just like any other type, and you can assign a value from the enum to a variable of that type

    Meal todayMeal = dinner;
    cout<<todayMeal<<endl;      // Output 2
    
    // cout<<breakfast<<endl;   // Output 0
    // cout<<lunch<<endl;      // Output 1
    // cout<<dinner<<endl;     // Output 2
    return 0;
}



