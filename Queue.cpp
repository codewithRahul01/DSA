#include<iostream>
using namespace std;

class Queue{
  public:
  int* arr;
  int front;
  int rear;
  int size;

  Queue(){
    size = 1000;
    arr = new int (size);
    front = 0;
    rear = 0;
  }

  void Enqueue(int data){
    if(rear == size){
      cout<<"Push not possible coz Queue is Full"<<endl;
    }
    else{
      arr[rear]=data;
      rear++;
    }
  }

  void Dequeue(){
    if(rear == front ){
      cout<<"Pop not possible coz Queue is Empty"<<endl;

    }
    else{
      arr[front]=-1;
      front ++;
      if(front == rear){
        front = 0;
        rear = 0;
      }
    }
  }
  void isEmpty(){
    if(front ==rear){
      cout<<"Queue is Empty"<<endl;
    }
  }
  
};
int main(){
  Queue q;
  int data;
  cout<<"Enter the data: ";
  cin>>data;
  int i=0;
while(data!=-1){
  q.Enqueue(data);
  cout<<"The data of queue is : ";
  cout<<q.arr[i]<<endl;
  cout<<"Enter the data: ";
  cin>>data;
  i++;
  }

  q.Dequeue();
  q.isEmpty();
  
  
}