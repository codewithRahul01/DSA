// // #include <iostream>
// // using namespace std;

// // class node
// // {

// // public:
// //   int data;

// //   node *left;
// //   node *right;

// //   node(int value)
// //   {
// //     this->data = value;
// //     this->left = NULL;
// //     this->right = NULL;
// //   }
// // };

// // node *insertIntoBST(node *&root, int d)
// // {

// //   if (root == NULL)
// //   {
// //     root = new node(d);
// //   }

// //   if (d > root->data){
// //     //inseert the node on right side
// //     root->right = insertIntoBST(root->right,d);
// //   }
// //   else{
// //     //insert the node on left side
// //     root->left = insertIntoBST(root->left,d);
// //   }
// //   return root;
// // }

// // void takeInput(node *&root)
// // {
// //   int data;
// //   cin >> data;

// //   while (data != -1)
// //   {
// //     insertIntoBST(root, data);
// //     cin >> data;
// //   }
// // }

// // int main()
// // {
// //   node *root = NULL;

// //   cout<<"Enter the data to create BST"<<endl;
// //   takeInput(root);
// //   return 0;
// // }

// #include<iostream>

// using namespace std;

// class node{
//   public:
//   int data;
//   node* left ;
//   node* right;

//   node(int value){
//     this -> data = value;
//     this -> right = NULL;
//     this -> left = NULL;

//   }
// };

// node* buildBST(node* root,int d){
//     if(root == NULL){
//       root = new node(d);

//     }

//     if(d > root->data){
//       root->right=buildBST(root->right,d);

//     }
//     else{
//       root->left = buildBST(root->left,d);
//     }
//     return root;
// }
// bool searchIntoBST(node* root ,int d){
//   if(root ==NULL){
//     return false;
//   }

//   if(root->data==d){
//     return true;
//   }

//   if(root->data>d){
//    return searchIntoBST(root->left,d);
//   }
//   else{
//     return searchIntoBST(root->right,d);
//   }
// }
// void takeInput(node* &root){
//   int data;

//   cin>>data;
//   while ( data!=-1){
//     root=buildBST(root,data);
//     cin>>data;
//   }
// }

// int main(){
//   node* root = NULL;
//     cout<<"Enter the data to create BST: "<<endl;
//     takeInput(root);

//     cout<<"Searching the node in BST: "<<endl;
//     if(searchIntoBST(root,23)){
//       cout<<"Data found in the Tree."<<endl;

//     }
//     else{
//       cout<<"Data not found.";
//     }
// }

// warshel  2.floid warshell  3. bfs   4.dfs

// #include <iostream>
// using namespace std;

// // Node structure
// class node {
// public:
//     int data;
//     node* left;
//     node* right;

//     // Constructor
//     node(int value) {
//         this->data = value;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// // Function to build BST
// node* buildBST(node* root, int d) {
//     if (root == NULL) {
//         root = new node(d); // Create a new node if root is NULL
//         return root;
//     }

//     if (d < root->data) {
//         root->left = buildBST(root->left, d); // Insert in the left subtree
//     } else {
//         root->right = buildBST(root->right, d); // Insert in the right subtree
//     }

//     return root;
// }

// // Function to search in BST
// bool searchIntoBST(node* root, int x) {
//     if (root == NULL) {
//         return false; // Element not found
//     }

//     if (root->data == x) {
//         return true; // Element found
//     }

//     if (x < root->data) {
//         return searchIntoBST(root->left, x); // Search in left subtree
//     } else {
//         return searchIntoBST(root->right, x); // Search in right subtree
//     }
// }

// // Function to take input for building BST
// void takeInput(node*& root) {
//     int data;
//     cout << "Enter elements to insert into BST (-1 to stop): " << endl;
//     cin >> data;

//     while (data != -1) {
//         root = buildBST(root, data);
//         cin >> data;
//     }
// }

// // Main function
// int main() {
//     node* root = NULL;

//     // Build the BST
//     cout << "Building the BST..." << endl;
//     takeInput(root);

//     // Add a new node
//     cout << "Enter a value to insert into the BST: " << endl;
//     int newdata;
//     cin >> newdata;
//     root = buildBST(root, newdata);

//     // Search for a value in the BST
//     cout << "Enter a value to search in the BST: " << endl;
//     int searchValue;
//     cin >> searchValue;

//     if (searchIntoBST(root, searchValue)) {
//         cout << "Data found in the BST." << endl;
//     } else {
//         cout << "Data not found in the BST." << endl;
//     }

//     return 0;

#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int value)
  {
    this->data = value;
    this->left = NULL;
    this->right = NULL;
  }
};

node *buildBST(node *root, int d)
{
  if (root == NULL)
  {
    root = new node(d);
    return root;
  }
  if (root->data > d)
  {
    root->left = buildBST(root->left, d);
  }
  else
  {
    root->right = buildBST(root->right, d);
  }
  return root;
}
int minValue(node*);
int maxValue(node*);
bool searchIntoBST(node *root, int x)
{
  if (root == NULL)
  {
    return false;
  }
  if (root->data == x)
  {
    return true;
  }
  if (root->data > x)
  {
    return searchIntoBST(root->left, x);
  }
  else
  {
    return searchIntoBST(root->right, x);
  }
}

void takeInput(node *&root)
{
  int data;
  cin >> data;
  while (data != -1)
  {
    root = buildBST(root, data);
    cin >> data;
  }
}

void inorderTraversal(node *root)
{
  if (root == NULL)
  {
    return;
  }

  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
}

void preorderTraversal(node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}
void postorderTraversal(node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->data << " ";
}

node *deleteNode(node *root, int val)
{
  if (root == NULL)
  {
    return root;
  }

  if (root->data == val)
  {
    // 0 child
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }

    // 1 child
    // left child
    if (root->left != NULL && root->right == NULL)
    {
      node *temp = root->left;
      delete root;
      return temp;
    }
    if (root->left == NULL && root->right != NULL)
    {
      node *temp = root->right;
      delete root;
      return temp;
    }

    // 2 child
    if (root->left != NULL && root->right != NULL)
    {
      int mini = minValue(root->right);
      root->data = mini;

      root->right = deleteNode(root->right, mini);
      return root;
    }
  }
  else if (root->data > val)
  {
    root->left = deleteNode(root->left, val);

  }
  else
  {
    root->right = deleteNode(root->right, val);
  }
    return root;
}  

int minValue(node *root)
{
  int mini;
  while (root->left != NULL)
  {
    root = root->left;
  }
  mini = root->data;
  return mini;
}
int maxValue(node *root)
{
  int maxi;
  while (root->right != NULL)
  {
    root = root->right;
  }
  maxi = root->data;
  return maxi;
}

int main()
{

  node *root = NULL;

  cout << "Enter the value of data: " << endl;

  takeInput(root);

  cout << "Inserting a new node to BST of data: " << endl;
  int newdata;
  cin >> newdata;
  root = buildBST(root, newdata);

  cout << "Enter data of node to be searched: " << endl;
  int searchvalue;
  cin >> searchvalue;
  if (searchIntoBST(root, searchvalue))
  {
    cout << "Data found." << endl;
  }
  else
  {
    cout << "Data not found." << endl;
  }

  cout << "The inorder traversal of bst tree: " << endl;
  inorderTraversal(root);

  cout << "\nThe preorder traversal of bst tree: " << endl;
  preorderTraversal(root);

  cout << "\nThe postorder traversal of bst tree: " << endl;
  postorderTraversal(root);

  // 10 5 4 3 21 15 27 12 34 -1

  cout<<"Max value present in tree is: "<<endl<<maxValue(root)<<endl;
  cout<<"Min value present in tree is: "<<endl<<minValue(root)<<endl;

  cout<<"Enter the data to be deleted from tree:"<<endl;
  int deletedvalue;
  cin>>deletedvalue;

  root=deleteNode(root,deletedvalue);
  cout<<"The inorder traversal after deletion is: "<<endl;
  inorderTraversal(root);
  
}
a



// #include<iostream>>
// using namespace std;

// class node{
//   public:

//   int data;
//   node* left;
//   node* right;
// node(int value){
//   this->data=value;
//   this->left=NULL;
//   this->right==NULL;
// }

// };

// node* buildBST(node* root,int value){
//     if(root==NULL){
//       root=new node(value);
//       return root;
//     }

//     if(root->data>value){
//         buildBST(root->left,value);
//         // return root;
//     }
//     else{
//       buildBST(root->right,value);
//       // return root;
//     }
// }
// bool searchIntoBST(node* root,int d){
//   if(root==NULL){
//     return false;

//   }
//   if(root->data==d){
//     return true;

//   }

//   if(root->data>d){
//     return searchIntoBST(root->left,d);
//   }
//   else{
//     return searchIntoBST(root->right,d);
//   }
// }



// node* deleteInBst(node*root,int x){
//     //0 child
//     if(root->left==NULL&&root->right==NULL){
//       delete root;
//       return NULL;
//     }
//     //1 child (left)
//     if(root->left!=NULL&&root->right==NULL){
//       node* temp=root->left;
//       delete root;
//       return temp;
//     }
//     //1 child (right)
//     if(root->left==NULL&&root->right!=NULL){
//       node* temp=root->right;
//       delete root;
//       return temp;
//     }
//     //2 child 

//     if(root->left!=NULL&&root->right!=NULL){

//     }

// }

// void takeInput(node*& root){
//     int data;
//     cin>>data;

//     while(data!=-1){
//       buildBST(root,data);
//       cin>>data;
//     }
// }

// int main(){
//   node* root=NULL;

//   cout<<"Creating a BST....."<<endl<<"ENTER the data: "<<endl;
//   takeInput(root);
// }