#include <iostream>
using namespace std;
int main(){
    int n=5;
    int data[n]={1,3,4,5};
    int front=0, rear=n-1,item=4;
    if(front==-1){
        cout<<"underflow";
    }
    else if(front==0 && rear==0){
        front==-1;
    }
    else if(front=n-1){
        front==0;
    }
    else{
     front=front-1;

}
    data[front]=item;
   for(int i=0;i<n;i++){
    cout<<data[i]<<" ";
   }
}