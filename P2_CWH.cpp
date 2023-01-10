#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
// precesion in c++ for a floating point number
int main(){
    //floor(), ceil(), trunc(), round() and setprecision()
    // cout<<(float)1/3; // default precesion is set upto 6 significant digits
    
    // **********

    //1 - floor ----> floor rounds off the given value to the closest integer which is less than the given value. it defines under <cmath> [GIF]
    float a=1.514;
    cout<<"gif done by floor(floor(a)): "<<floor(a)<<endl;

    //2- ceil rounds off the given value to the closest integer which is more thanthe given value. comes under <cmath>
    cout<<"lif done by ceil(ceil(a)): "<<ceil(a)<<endl;

    //3- truncateas means to remove : trunc() means to remove the decimals after the digits
    cout<<"making float to int(trunc(a)) : "<<trunc(a)<<endl;

    //4-round() : is used to round off to the closest integer value come under <cmath> ands <ctgmath>
    cout<<"Round off to the closest integer(round(a)) : "<<round(a)<<endl;

    //5- setprecison() is used along with "fixed" provides precision to the floating poin number correct to the decimal numbers mentioned in the brackets of the setprecision. comes undr <iomanip>
    cout<<"set precision upt to 3 digits "<<fixed<<setprecision(3)<<a<<endl;
    return 0;
}