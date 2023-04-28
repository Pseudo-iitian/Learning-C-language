#include<bits/stdc++.h>
using namespace std;

// forward declaration
class X;
class Y;

class X{
    int data;
    public: 
        void setVaue(int value){
            data = value;
        }
    friend void add(X,Y);
};

class Y{
    int data;
    public: 
        void setVaue(int value){
            data = value;
        }
    friend void add(X,Y);
};

void add (X o1,Y o2){
    cout<<"summing the data of X and Y classes give me: "<<(o1.data+o2.data)<<endl;
}
int main(){
    X o1;
    Y o2;
    o1.setVaue(3);
    o2.setVaue(5);
    add(o1,o2);
    return 0;
}