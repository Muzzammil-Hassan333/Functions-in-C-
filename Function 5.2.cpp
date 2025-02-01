#include <iostream>
#include <cmath>
using namespace std;
int fun(int n, int m){
    cout<<n<< " rise to the power of "<<m<<" is "<<pow(n,m);
    return 0;
}
int main(){
    int x,y;
    cout<<"Enter two numbers :";
    cin>>x>>y;
    fun(x,y);
    return 0;
}