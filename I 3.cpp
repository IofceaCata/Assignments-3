#include<iostream>
using namespace std;
int main(){
    long long n,x,maxim=0,minim=99999;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x>maxim)
            maxim=x;
        if(x<minim)
            minim=x;
    }
    cout<<maxim<<" "<<minim;

}
