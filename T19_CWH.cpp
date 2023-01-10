#include<iostream>
using namespace std;

int fact(int n){
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);

    // fact(4)=4*fact(3);
    // fact(4)=4*3*fact(2);
    // fact(4)=4*3*2*fact(1);
    // fact(4)=4*3*2*1;
    // fact(n)=n*fact(n-1);
    // n! = n*(n-1)!

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"The "<<n<<"! is : "<<fact(n);
    return 0;
}