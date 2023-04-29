#include<bits/stdc++.h>
using namespace std;

class Point;
double distance(Point,Point);
class Point{
    int x,y;
    friend double distance(Point,Point);
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point at: ("<<x<<","<<y<<")"<<endl;
        }
};

// create function which takes 2 points and compute the distance between these two points

double distance(Point p1, Point p2){
    double d = (double)sqrt(pow((p1.x-p2.x),2)+ pow((p1.y-p2.y),2));
    return d;
}
int main(){
    Point p1 = Point(0,1);
    Point p2 = Point(4,4);
    int dis = distance(p1,p2);
    cout<<dis;
    return 0;
}