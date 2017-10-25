#include<iostream>
using namespace std;
int main(){
    long long n,x,sub8=0,ok=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x<5)
            ok=0;
        if(x<8){
            sub8++;
        }
    }
    if(ok==1)
        cout<<"All students passed "<<'\n';
    else
        cout<<"Not all students passed "<<'\n';
    cout<<(sub8*100)/n<<" % is the percentage of students that obtained grades smaller than 8.";




}
