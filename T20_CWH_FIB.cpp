#include<iostream>
using namespace std;

int fib(int n){
    // 0 1 1 2 3 5 8
    if(n==0){
        return n;
    }
    else if(n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
        // fib(3)=fib(2)+fib(1)
        // fib(3)=fib(1) + fib(0) +fib(1)
        // fib(3)= 1      +  0     + 1;
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"The term in fibonacci series at position "<<n<<" is "<<endl;
    cout<<fib(n);
    return 0;
}