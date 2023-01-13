#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(){ counter=0; }
        void setPrice();
        void displayPrice();
};

void shop :: setPrice(){
    cout<<"Enter itemId : ";
    cin>>itemId[counter];
    cout<<"Enter itemPrice : ";
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"The price of item alongwith Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}