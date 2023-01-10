#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    int element,size;
    cout<<"Enter the size of element "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<endl;
        cin>>element;
        v1.push_back(element);
    }
    cout<<v1.size();
    v1.pop_back(); // removes the end element
    display(v1);
    vector<int> :: iterator iter = v1.begin();
    v1.insert(iter+1,20); // v1.insert(index, number of times, number to be inserted);
    display(v1);
    return 0;
}