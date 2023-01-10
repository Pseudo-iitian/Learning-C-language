#include<iostream>
#include<cstring>

using namespace std;
// nesting of member functions
class binary{
    string s;

public: 
    void read();
    void chk_bin();
    void ones_complement();
    void dispay();
};

void binary :: read(){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
    chk_bin();
}

void binary :: chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1' && s.at(i)!='0'){
            cout<<"Incorrect Binary Format";
            exit(0);
        }
    }
    ones_complement();
}

// if binary convert taek its one's complement
void binary :: ones_complement(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i) = '0';
        }
    }
    dispay();
}

// displaying binary number
void binary:: dispay(){
    cout<<"Displaying one's complememtn of a binary number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){ 

    binary b;
    b.read();
    // b.chk_bin();
    // b.ones_complement();
    // b.dispay();

    return 0;
}
    // classes and Objects

    // c++ was intitialy called as c with classes by STROUSTROUP
    // classes extension of structures in c
    // Structures has limitations
            // - members are public 
            // - no methods
    // classe --> structures + more
    // classes can have methods and properties
    // in classes we can create member with public and with private
    // structures in c++ is typedefed already, no need to add typedef
                // struct emplotee
                // {
                //     /* data */
                // }em;
    // we can declare class objects along with class decalration as well
                // class employee
                // {
                // private:
                //     /* data */
                // public:
                //     employee(/* args */);
                //     ~employee();
                // }harry,rohan,lovish;