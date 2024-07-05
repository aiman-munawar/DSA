#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,d,x1,x2,x;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
     if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
         cout<<x1<<" "<<x2;
     }
     else if(d==0){
        x=(-b)/(2*a);
        cout<<x<<"unique solution";
     }
     else 
       cout<<"no real solution";
     
     
}