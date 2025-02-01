#include <iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=n;i>=1;i--){
        facto=facto*i;
            }
    cout<<"Fanctorial of "<<n<<" is "<<facto;
    return 0;
}
int main(){
    int m;
    cout<<"Enter a number:";
    cin>>m;
    fact(m);
    return 0;
}
