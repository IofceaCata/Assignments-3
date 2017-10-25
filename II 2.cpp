#include<iostream.h>
#include<math.h>
void main()
{
    int a,b,c;
    float x1,x2,delta,preal,pimag;
    cout<<"Dati valoarea lui a = ";
    cin>>a;
    cout<<"Dati valoarea lui b = ";
    cin>>b;
    cout<<"Dati valoarea lui c = ";
    cin>>c;
    if(a==0)
        cout<<"Ecuatie de gradul I"<<"\n";
    else{
        delta=b*b-4*a*c;
    if(delta >= 0){
        cout<<"Radacini reale: ";
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<"x1 = "<<x1<<" x2 = "<<x2;
    }
    else{
        cout<<"Radacini complexe :";
        delta=-delta;
        preal=-b/(2*a);
        pimag=sqrt(delta)/(2*a);
        cout<<"x1 = "<<preal<<" + i*"<<pimag<<"\n";
    cout<<"x2 = "<<preal<<" - i*"<<pimag;
    }
    }
}
