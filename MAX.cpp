// set max:=data[0],loc:=0,i:=0
// Repeat step 3 while k<n
  // if max<data[i]
  // a) set max := data[i]
  // b) set loc=i
  //   set i:=i+1  
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int data[n]={1,6,7,8,9};
    int loc=0,i=0,max=data[0];
     while(i<n){
        if(max<data[i]){
            max=data[i];
            loc=i;
        }
         i++;
     }
     cout<<max<<" "<<loc;
}