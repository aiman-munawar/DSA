#include <iostream>
using namespace std;
int main(){
    int n=5;
    int data[n]={1,3,4,5};
    int front=0,rear=3,item=6;
    if(front==0 && rear==n-1){
        cout<<"overflow";
    }
    else if(front==-1){
       front=0;
       rear=0;
    }
    else if(rear==n-1){
        rear=0;
    }
    else{
        rear=rear+1;
    } 
     data[rear]=item;
  for(int i=0;i<n;i++){
    cout<<data[i]<<" ";
  }






    
    
}