#include <iostream>
using namespace std;
float fun(float pn){
    return pn/2.205;
}
int main(){
    float pound;
    cout<<"Enter weights in pound : ";
    cin>>pound;
    cout<<"Weight in kilogram is :"<<fun(pound);
    return 0;
    
}