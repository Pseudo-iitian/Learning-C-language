// passing object as a functions
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public :
        void setData(int v1, int v2){
            a=v1;
            b=v2;
        }
        void printData(){
            cout<<"The complex Number is : "<<a<<"+"<<b<<"i"<<endl;
        }
        void setDataBySum(Complex o1, Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
};
int main(){
    Complex s1,s2,s3;

    s1.setData(1,2);
    s1.printData();

    s2.setData(3,4);
    s2.printData();

    s3.setDataBySum(s1,s2);
    cout<<"sum of s1 and s2 complex number is : "<<endl;
    s3.printData();
    return 0;
}