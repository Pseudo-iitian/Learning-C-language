#include<iostream>
using namespace std;

int global=4; // global variable

void sum(){
    cout<<global;
}
int main(){
    // inbuild data types
    int a=14,b=15;
    float pi=3.14;
    // float pi = M_PI;
    char c = 'c';
    bool is_true=true;
    int global = 34; // local variable hai iski precedence jyada hai than that of global variable
    cout<<"this is tutorial 4\n";
    cout<<"The value of a is "<<a<<". The value of b is "<<b<<".\n";
    cout<<"The value of pie is "<<pi<<".The value of c is "<<c<<".";
    sum();
    cout<<global<<is_true;
    return 0;
}
