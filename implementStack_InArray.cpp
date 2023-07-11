#include <iostream>

using namespace std;


#define size 10

class stack{
    public : 
      int  arr[size];
      int top;
      
 
  stack(){
        top=-1;
     } 
     
     void push(int element){
         if(top < size){
             top++;
             arr[top] = element;
         }
         else{
             cout<<"Stack is full "<<endl;
         }
     }
     int  pop(){
         if(isempty()){
             return -1;
         }
         else{
             int temp = arr[top];
             top--;
             return temp;
         }
     } 
    
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false ;
        }
    }
     
    int peak(){
        if(!isempty()){
            return arr[top];
        }
        else{
            return -1;
        }
    } 
     
};


int main()
{
  stack s ;
  s.push(9);
  s.push(4);
  cout<<"poped Element : "<<s.pop()<< endl;
  cout<<"Element is present on preak : "<<s.peak()<<endl;
  cout<<s.isempty()<<endl;
   cout<<"poped Element : "<<s.pop() <<endl;
   if(s.isempty())
     cout<<"stack is empty "<<endl;
    return 0;
}
