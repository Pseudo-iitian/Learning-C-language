#include<iostream>
using namespace std;

void calculate_the_maximum(int n, int k) {
    int AND=0,OR=0,XOR=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if((i&j)>AND && (i&j)<k)
            AND=i&j;
            if((i|j)>OR && (i|j)<k){
                OR=i|j;
            }
            if((i^j)>XOR && (i^j)<k){
                XOR=i^j;
            }
        }
    }
    cout<<AND<<endl;
    cout<<OR<<endl;
    cout<<XOR<<endl;

}
int main(){
    int n,k;
    cout<<"Enter n and k : "<<endl;;
    cin>>n>>k;
    calculate_the_maximum(n,k);
    return 0;
}