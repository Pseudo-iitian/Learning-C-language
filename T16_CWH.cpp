#include<iostream>
using namespace std;

int sum(int,int); // acceptable
// int sum(int a,int b); // acceptable

void g(void);
// void g(); // acceptable 
int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    // a and b is actual parameters
    cout<<"Sum of "<<a<<" and "<<b<<" is : "<<sum(a,b)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    return a+b;
    // a and b is formal parameters that takes value from actual parameters
}
void g(){
    cout<<"Hello! Good Morning Abhishek";
}