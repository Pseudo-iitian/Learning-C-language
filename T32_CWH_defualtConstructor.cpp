#include<bits/stdc++.h>
using namespace std;

// constructor with default arguements
class Simple{
    int data1, data2,data3;
    public:
        Simple(int a,int b = 9,int c=32){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData(){
            cout<<"The value of data is "<<data1<<","<<data2<<" and "<<data3<<endl;
        }
};
int main(){
    Simple s1(2,3);
    // here actual arguements have more importance than other ones
    s1.printData();

    Simple s2(4);
    s2.printData();
    return 0;
}