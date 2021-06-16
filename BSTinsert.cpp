//Iterative approach to insert key in the BST
//Search the appropriate node where to insert taking O(logn) time 
//then insert , space : O(height) - - > worst case O(n)

Node* insert(Node* root, int key)
{
 
  Node* prev=nullptr;
  Node* cur=root;
  newNode=new Node(key);
  
  //check if the root is nullptr
  if(root==nullptr)
    return newNode;
  
  while(!cur)
  {
    if(key==cur->key)
      //key alredy exist 
      print;
    else if(key<cur->key)
    {
     prev=cur;
      cur=cur->left;
    }
    else
    {
     prev=cur;
      cur=cur->right;
    }
    
    return root; //return the whole new tree
  }
  
  
  
}
