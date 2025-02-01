#include <iostream>
using namespace std;
int fun(int n,int m)
{
    if(n>m){
        cout<<n<<" is maximum";
    }
    else{
        cout<<m<<" is maximum";
    }
    return 0;
}
int main(){
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    fun(x,y);
}