#include<iostream>
using namespace std;
int main(){
    long long n,m=0,p=1,r;
    cin>>n;
    while(n!=0){
        r=n%2;
        m=m+r*p;
        p=p*10;
        n=n/2;
    }
    cout<<m;
}
