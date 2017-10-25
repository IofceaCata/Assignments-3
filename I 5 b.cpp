#include<iostream>
using namespace std;
int main(){
    int n,b,m=0,p=1,c;
    cin>>n;
    while(n!=0){
        c=n%10;
        m=m+c*p;
        p=p*2;
        n=n/10;
    }
    cout<<m;
}
