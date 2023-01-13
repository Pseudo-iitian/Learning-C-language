#include<iostream>
using namespace std;

class employee{
    private: 
        int a,b,c;
    public:
        int d,e;
    void setData(int a1,int b1,int c1);
    void printData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
// scope resolution operator is must
void employee :: setData(int a1,int b1,int c1){ 
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry;
    // harry.a=34; is declare private, we can't acces it directly
    harry.d = 4;
    harry.e = 5;
    harry.setData(1,2,3);
    harry.printData();
    return 0;
}