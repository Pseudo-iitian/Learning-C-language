#include<bits/stdc++.h>
using namespace std;

class c2; // how we know that it will come after this, so need to declare first
class c1;
class c1{
    int val1;
    friend void swapPvtData(c1 &,c2 &);
    // c2 can access c1 data
    public:
        void inData(int data){
            val1 = data;
        }
        void displayData(void){
            cout<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void swapPvtData(c1 &,c2 &);
    public:
        void inData(int data){
            val2 = data;
        }
        void displayData(void){
            cout<<val2;
        }
};

// we are just going to swap the private value of both classes objects

void swapPvtData(c1 &o1,c2 &o2){
    int data = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = data;
}
int main(){
    c1 o1;
    c2 o2;

    o1.inData(4);
    o2.inData(5);
    cout<<"before swapping : "<<endl;
    cout<<"The value of o1: ";
    o1.displayData();
    cout<<"The value of o2: ";
    o2.displayData();
    cout<<endl;
    swapPvtData(o1,o2);
    
    cout<<"After swapping: "<<endl;
    cout<<"The value of o1: ";
    o1.displayData();
    cout<<"The value of o2: ";
    o2.displayData();
    return 0;
}