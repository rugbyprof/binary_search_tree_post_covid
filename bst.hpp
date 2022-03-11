#include <iostream>
#include <vector>

using namespace std;

struct Node{
  int data;
  Node* right;
  Node* left;

  Node(int x){
    data = x;
    right = left = nullptr;
  }
};

class Bst{
  Node* root;
  void Insert(Node* &root,Node* newNode){
    if(!root){
      root = newNode;
    }else{
      if(newNode->data < root->data){
        Insert(root->left,newNode);
      }else{
        Insert(root->right,newNode);
      }
    }
    
  }
  void Print(Node* root){
    if(!root){
      return;
    }else{
      Print(root->left);
      cout<<root->data<<endl;
      Print(root->right);
    }
  }

  bool Find(Node* root, int key){
    if(!root){
      return false;
    }else{
      if(root->data == key){
        return true;
      }else{
        
        bool left = Find(root->left,key);
        bool right = Find(root->right,key);
        if(left || right){
          return true;
        }else{
          return false;
        }
      }
    }
  }

  int Height(Node* root){
    if(!root){
      return 0;
    }else{
      int leftH = Height(root->left);
      int rightH = Height(root->right);
      if(leftH > rightH){
        return 1 + leftH;
      }else{
        return 1 + rightH;
      }
    }
  }

public:
  Bst(){
    root = nullptr;
  }

  void Insert(int x){
    if(!root){
      root = new Node(x);
    }else{
      Insert(root,new Node(x));
    }
  }

  bool Find(int key){
    return Find(root,key);
  }

  void Print(){
    Print(root);
  }

  int Height(){
    return Height(root);
  }
};
