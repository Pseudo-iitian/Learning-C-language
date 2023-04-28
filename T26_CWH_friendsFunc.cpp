#include<bits/stdc++.h>
using namespace std;

class Complex;
class Calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        // it is giving error because we are accessing private data
        // after implementing friedns fucnction it is giving again 
        // so, compiler ko thodi pta hai ki complext class me a hai ya b

        // int sumRealComplex(Complex o1, Complex o2){
        //     return o1.a+o2.a;
        // }

        // instead of writing function, just declare here
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};
class Complex{
    int a,b;
    // it means ki calculator ke sumreal complext function ko a and b access kerne ki permission di jaati hai

    // if you want more and more function to get access to the private part of complext for calculator 
    // the why not we make friend class of complext for calculator
    // individually declaring function as friends
    // friend int Calculator:: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator:: sumCompComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire class as friend
    // we are making entire calculator class as frined of complex class 
    friend class Calculator;
    public :
        void setData(int a1,int b1){
            a=a1;
            b=b1;
        }
        friend Complex sumComplex(Complex o1, Complex o2); // it allows sumcomplex function to access private information from the class Complex.
        void getData(){
            cout<<"the complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex s3;
    s3.setData((o1.a+o2.a),(o1.b+o2.b));
    return s3;
}

int Calculator:: sumRealComplex(Complex o1,Complex o2){
    return (o1.a+o2.a);
}

int Calculator:: sumCompComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}
int main(){
    Complex s1,s2;
    Calculator sum;
    s1.setData(1,2);
    s1.getData();

    s2.setData(4,5);
    s2.getData();

    int real  = sum.sumRealComplex(s1,s2);
    int comp = sum.sumCompComplex(s1,s2);
    // sum.getData();
    cout<<"The sum of the complext number is "<<real<<"+"<<comp<<"i"<<endl;
    return 0;
}

// properties of friend functions
// 1- Not in the scope of class
// 2- since it is not in the scope of class, it cann not be called from the object of the class
// c1.sumComplex() -> invalid
// 3- can be invoked wihtout the help of any object
// 4- usually conatins the object as arguements
// 5- can be decalred in public and private section of the class 
// 6- iy cannot access the member direclty by their name and need object_name.member_name to access any member