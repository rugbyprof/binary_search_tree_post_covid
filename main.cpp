#include <iostream>
#include "bst.hpp"

using namespace std;

int main() {
  Bst tree;
  tree.Insert(17);
  tree.Insert(18);
  tree.Insert(33);
  tree.Insert(41);
  tree.Insert(91);
  tree.Insert(106);






  tree.Print();
  int k = 17;
  cout<<"Looking for "<<k<<":"<<tree.Find(k)<<endl;

  cout<<"Height: "<<tree.Height()<<endl;
}