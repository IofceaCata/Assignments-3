#include<iostream>
using namespace std;
int main(){
    long long n,a,nr2=0,nr5=0,nr0=0,r=0,nr=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        while((a%10)==0){
            nr0++;
        }
        if(a%10==2)
            nr2++;
        if(a%10==5)
            nr5++;
    }


    if(nr2<=nr5)
        nr=nr0+nr2;
    else
        nr=nr0+nr5;
    cout<<nr;



}
