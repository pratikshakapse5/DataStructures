
//Iteratively search in the binary search tree
//meaning: keys or values in the nodes are all sorted
//Search space reduces to half Time complexity: O(logn)
//Space complexity : O(height) worst case O(n)

int search(Node* root, int key)
{
  
  if(root==nullptr) //if the tree is empty
    return nullptr;
  
  Node* cur=root;
  
  while(cur!=nullptr)
  {
   if(key==cur->key)  //found key
     return cur;
    else if(key<cur->key) //key is smaller-> search in left sub tree
      cur=cur->left;
    else //key is bigger -> search in right sub tree
      cur=cur->right;
  }
  
  return nullptr; //key not found
  
}
