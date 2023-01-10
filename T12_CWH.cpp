#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    int** c=&b;
    // address of operator
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<b<<endl;
    //value at ( dereference operator)
    cout<<"The value at a is "<<*b<<endl;
    cout<<"The value at a is "<<*&a<<endl;
    cout<<"The value at a is "<<a<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"value at c is the address of a "<<*c<<endl;
    cout<<"the value of a is "<<**c<<endl;
    return 0;
}