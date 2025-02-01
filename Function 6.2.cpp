#include <iostream>
using namespace std;
int fun(int n,int m){
    if (n>m){
        return n;
    }
    else{
        return m;
    }
}
int main(){
    int x,y;
    cout<<"Enter two numbers :";
    cin>>x>>y;
    int max=fun(x,y);
    cout<<"Maximum number is "<<max;
    return 0;
}