#include <iostream>
using namespace std;
int fun(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
int main(){
    int m;
    cout<<"Enter a number :";
    cin>>m;
    fun(m);
}