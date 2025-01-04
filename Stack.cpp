
// #include <iostream>
// #include <cstdlib>
// using namespace std;

// class Stack {
// public:
//     int size;
//     int top;
//     int* arr;

//     Stack(int size) {
//         this->size = size;
//         this->top = -1;
//         this->arr = new int[size];
//     }

//     ~Stack() {
//         delete[] arr;
//     }

//     bool isEmpty() {
//         return top == -1;
//     }

//     bool isFull() {
//         return top == size - 1;
//     }
// };

// int main() {
//     Stack s(80);  // Create a stack object of size 80

//     // Example of using the isEmpty and isFull functions
//     if (s.isEmpty()) {
//         cout << "The stack is empty." << endl;
//     }

//     if (!s.isFull()) {
//         cout << "The stack is not full." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include<cstdlib>
// using namespace std;

// class Stack
// {
// public:
//   int size;
//   int top;
//   int *arr;

//   Stack(int s)
//   {
//     this->size = s;
//     this->top = -1;
//     this->arr = new int[size];
//   }
//   int isEmpty()
//   {
//     if (top == -1)
//     {
//       return 1;
//     }
//     else
//     {
//       return 0;
//     }
//   }

//   int isFull()
//   {
//     if (top == size - 1)
//     {
//       return 1;
//     }
//     else
//     {
//       return 0;
//     }
//   }
// };

// int main()
// {
//   int size;
//   cout << "Enter the value of size: " << endl;
//   cin >> size;
//   Stack s(size);  
//    if(s.isEmpty()){
//     cout<<"Stack is empty."<<endl;
//    }
//    else{
//     cout<<"Stack is not empty"<<endl;
//    }
//   //  s.arr[0]=23;
//   //  s.top++;
//    if(s.isFull()){
//     cout<<"Stack is full."<<endl;
//    }
//    else{
//     cout<<"Stack is not full"<<endl;
//    }

//    for(int i=1;i<=size/2;i++){
//     cin>>s.arr[i];
//     s.top++;
//    }
//    if(s.isFull()){
//     cout<<"Stack overflow"<<endl;
//    }
//    else{
//     s.top++;
//     s.arr[s.top]=10;
//    }
//    if(s.isEmpty()){
//     cout<<"Stack underflow"<<endl;
//    }
//    else{
//     s.top--;
//    }
   

// }


// #include<iostream>
// using namespace std;  

// class stack {
// int size;
// int top;
// int *arr;

// stack (int s){
//   this->size=s;
//   this->top=-1;
//   this->arr=new int[size];

// }

// };
