#include <iostream>
using namespace std;
int print(int n,int m){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    return 0;
}
int main(){
    int n,m;
    cout<<"Enter two numbers : ";
    cin>>n>>m;
    print(n,m);
    return 0;
}