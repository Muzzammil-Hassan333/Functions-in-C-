#include <iostream>
using namespace std;
int fun(int x, int y){
    int result=1;
    for(int i=1;i<=y;i++){
        result=result*x;
        
    }
    cout<<x<<" rise to the power of "<<y<<" is "<<result;
    return 0;
}
int main(){
    int n,m;
    cout<<"Enter two numbers:";
    cin>>n>>m;
    fun(n,m);
    return 0;
}