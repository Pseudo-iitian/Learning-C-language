#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    cout<<"using function with 2 variables is ";
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with three arguements is ";
    return a+b+c;
}

//volume of a cube
float volume(float a){
    return (a*a*a);
}

//volume of cylinder
float volume(float r, float h){
    return (M_PI*r*r*h);
}

//volume of cuboid
float volume(float l, float b, float h){
    return (l*b*h);
}
// we can give sum(3.4,5) i.e. floating point number to it 
// sum funvtion will automatically convert it into floating point if sum(float a, int b) or cam be converted to char from int if sum has sum(char a, int b) while passimg sum(2,8);
//method overloading is sometime used to concatenate two or more than two strings
int main(){
    cout<<"The sum of 3 amd 6 "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 4 amd 5 "<<sum(3,4,5)<<endl;
    cout<<"volume of cylinder is "<<volume(3,4)<<endl;
    cout<<"volume of cube is "<<volume(3)<<endl;
    cout<<"volume of cuboid is "<<volume(3,4,5)<<endl;
    return 0;
}