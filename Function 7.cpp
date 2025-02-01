#include <iostream>
using namespace std;
int fun(float b,float h){
    cout<<"Area of triangle is "<<0.5*b*h;
    return 0;
}
int main(){
    float base,height;
    cout<<"Enter base of triangle:";
    cin>>base;
    cout<<"Enter height of triangle:";
    cin>>height;
    fun(base,height);
    return 0;
}