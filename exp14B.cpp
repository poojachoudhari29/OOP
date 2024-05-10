#include<bits/stdc++.h>
using namespace std;
template<class S>
class Stack{
      int size;
       S arr[10];
      int top;
      
      public:
           
            Stack();
            void push(S);
            void pop();
            void display();
            int isempty();
            int isfull();
          


};
template<class S> Stack<S> :: Stack(){
      top=-1;
      size = 10;

}

template<class S> void Stack<S> :: push(S data){
     if(Stack :: isfull()){
           arr[top+1] = data;
           top++;
           cout<<data<<" pushed\n";
           return; 
     } 
     cout<<"\nStack is full...";
}

template<class S> void Stack<S> :: pop(){
     if(Stack :: isempty()){
            cout<<"\nPopped element is "<<arr[top];
           top--;
           return; 
     } 
     cout<<"\nStack is empty..."; 

}

template<class S> void Stack<S> :: display(){
      cout<<endl;
      if(Stack :: isempty()){
            for(int i=top;i>-1;i--) cout<<arr[i]<<"\n"; 

            return;
      }
      cout<<"\nStack is empty";
           
}

template<class S>int Stack<S> :: isempty(){
      if(top==-1) return 0;
      else return 1;
}
template<class S>int Stack<S> :: isfull(){
      if(top==size-1) return 0;
      else return 1;
}


int main(){
      Stack<int> s1;
      
      s1.push(12);
      s1.push(13);
      s1.push(14);
      s1.display();
      s1.pop();
      s1.pop();
      s1.pop();
      s1.pop();
      cout<<endl;
      Stack<char> s2;
      s2.push('S');
      s2.push('M');
      s2.push('S');
      s2.display();
      s2.pop();
      s2.pop();
      s2.pop();
      s2.pop();
     cout<<endl;
      Stack<double> s3;
      s3.push(12.33);
      s3.push(11.15);
      s3.push(10.23);
      s3.display();
      s3.pop();
      s3.pop();
      s3.pop();
      s3.pop();
      
    
}
