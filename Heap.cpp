#include <iostream>
using namespace std;

class heap
{
public:
  int arr[100];
  int size;

  heap()
  {
    arr[0] = -1;
    size = 0;
  }

  void insert(int val)
  {
    size = size + 1;

    int index = size;
    arr[index] = val;
    while (index > 1)
    {
      int parent = index/2;
      if (arr[parent] < arr[index])
      {
        swap(arr[parent], arr[index]);
        index = parent;
      }
      else
      {
        return;
      }
    }
  }

  void print()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
void deleteFromHeap(){
  if(size ==0){
    cout<<"Nothing to delete..."<<endl;
    return;
  }

  arr[1]=arr[size];
  size--;

  int i=1;
  while(i<size){
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;

    if(leftIndex<size && arr[i]<arr[leftIndex]){
      swap(arr[i],arr[leftIndex]);
      i=leftIndex;
    }
    else if(rightIndex<size && arr[i] < arr[leftIndex]){
      swap(arr[i],arr[rightIndex]);
      i=rightIndex;
    }
    else{
      return;
    }
  }
}
};

void maxHeapify(int arr[],int n,int i){
  int largest = i;
  int left = 2*i;
  int right = 2*i + 1;

  if(left<=n && arr[largest]<arr[left]){
    largest=left;
    
  }
  if(right<= n && arr[largest]<arr[right]){
    largest=right;
  }
  if(largest!=i){
    swap(arr[largest],arr[i]);
    maxHeapify(arr,n,largest); 
  }
}



void minHeapify(int arr[],int n,int i){
      int smallest = i;
      int left = 2*i + 1;
      int right = 2*i + 2;
  if(left<n && arr[smallest]>arr[left]){
    smallest=left;

  }
  if(right<n && arr[smallest]>arr[right]){
    smallest = right ;

  }
  if(smallest!=i){
    swap(arr[smallest],arr[i]);
    minHeapify(arr,n,smallest);
    
  }

}

void heapSort(int arr[],int n){
    int size = n;
  // Step 1 : Swap the first and last array
  while(size>1){
      swap(arr[1],arr[size]);
      size--;

      //Step : Heapify the root to its right place
      minHeapify(arr,size,1);
      }
}



int main()
{
  heap h;
  h.insert(55);
  h.insert(54);
  h.insert(53);
  h.insert(50);
  h.insert(52);
  h.print();  
  h.deleteFromHeap();
  h.print();

  int arr[6]={-1,54,53,55,52,50};
  int n=5;
  for(int i=n/2;i>0;i--){    // 1 based indexing 
    maxHeapify(arr,n,i);
  }
  cout<<"Printing the data of Max Heap:  "<<endl;
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }


  cout<<endl;
  int arr1[5]={10,20,5,6,50};   //  0 based indexing 
  for(int i=n/2-1;i>=0;i--){
    minHeapify(arr1,n,i);
  }


  cout<<"Printing the data of Min Heap:  "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr1[i]<<" ";
  }
  cout<<endl;


  heapSort(arr,n);

  cout<<"Printing the sorted array: "<<endl;

  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
}


