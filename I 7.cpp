#include<iostream>
using namespace std;
int main(){
    unsigned long long int n,ok=1;
    cin>>n;
    for( int i=2;i*i<=n;i++)
        if(n%i==0){
            cout<<"Not prime ";
            ok=0;
            break;
        }
    if(ok==1)
        cout<<"Prime";




}
