#include<iostream>
using namespace std;

typedef struct employee{
    // every members is allocated its own memmory
    int eId;
    float salary;
    char favChar;
}ep;

union money{
    //memeory is shared
    int rice; //4 bytes
    char car; //1 byte
    float pounds; // 4 bytes but union me sirf ek datatype hi use ker sqte hai aur baaki nhi use hoga
};
int main(){
    // ep harry;
    // harry.eId = 624;
    // harry.salary = 12324323243;
    // harry.favChar='H';
    // cout<<harry.eId<<endl;
    // cout<<harry.salary<<endl;
    // cout<<harry.favChar<<endl;

    //enum ********** memory is shared
    // union money m1;
    // m1.car ='c';
    // m1.rice=22; // we overwrite rice than we have to print rice not car otherwise gives garbage value
    // cout<<m1.car<<endl;

    //enum*****
    enum meal{breakfast, lunch, dinner};
        meal m1 = lunch;
        cout<<m1;
        cout<<breakfast;
        cout<<dinner;
    return 0;
}