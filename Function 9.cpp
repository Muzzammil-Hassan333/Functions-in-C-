#include <iostream>
using namespace std;
float globle;
float fun(){
    return globle=globle*10;
}
int main(){
    cout<<"Enter a number for globle variable :";
    cin>>globle;
    cout<<"Value of globle varible before processing is :"<<globle<<endl;
    fun();
    cout<<"Value of globle variable after processing is :"<<globle<<endl;
    return 0;
}