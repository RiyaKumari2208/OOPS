#include<iostream>
using namespace std;

int main() {
    float r,b,h,l,w;

    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Area of circle="<<3.14*r*r<<endl;

    cout<<"Enter base and height of triangle:";
    cin>>b>>h;
    cout<<"Area of triangle="<<0.5*b*h<<endl;

    cout<<"Enetr length and width of rectangle:";
    cin>>l>>w;
    cout<<"Area of rectangle="<<l*w<<endl;

    return 0;
}