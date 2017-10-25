#include<iostream>
using namespace std;
int main(){
    int n,ok=1;
    cin>>n;
    cout<<"prime number : ";
    for(int i=2;i<n;i++){
            ok=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                ok=0;
                break;
            }
        }
        if(ok==1)
            cout<<i<<" ";

}
