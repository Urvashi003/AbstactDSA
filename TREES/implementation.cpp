#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void Preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);


}

void Inorder(Node* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void PostOrder(Node* root){
    if(root==NULL) return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

vector<int> levelOrder(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    queue<Node*>qt;
    qt.push(root);
    while(!qt.empty()){
        Node* node = qt.front();
        qt.pop();
        ans.push_back(node->data);
        if(node->left) qt.push(node->left);
        if(node->right) qt.push(node->right);

    }
    return ans;

}
vector<vector<int>> LineByLine(Node* root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    queue<Node*>qt;
    qt.push(root);
    while(!qt.empty()){
        int size= qt.size();
        vector<int>temp;
        for(int i=0;i<size; i++){
            Node* node = qt.front();
            qt.pop();
            temp.push_back(node->data);
            if(node->left) qt.push(node->left);
            if(node->right) qt.push(node->right);
        }
        ans.push_back(temp);
    }
    return ans;

}

vector<vector<int>> ZigZag(Node* root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    vector<int>temp;

    queue<Node*>qt;
    qt.push(root);
    bool flag= true;
    while(!qt.empty()){
        int size = qt.size();
        for(int i=0; i<size; i++){
         Node* node = qt.front();
         qt.pop();
         temp.push_back(node->data);
         if(node->left) qt.push(node->left);
         if(node->right) qt.push(node->right);
        }

        if(flag){
            ans.push_back(temp);
            flag=false;
        }
        else{
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            flag= true;
        }

    }
    return ans;
}

void solveLeft(Node* root, vector<int>&ans, int level){
    if(root==NULL) return;
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    
        solveLeft(root->left, ans, level+1);
        solveLeft(root->right,ans,level+1);
    
}

void solveRight(Node* root, vector<int>&ans, int level){
   if(root==NULL) return;
   if(ans.size()==level){
    ans.push_back(root->data);
   }
   solveRight(root->right,ans,level+1);
   solveRight(root->left,ans,level+1);
}

vector<int> topView(Node* root){
   vector<int>ans;
   if(root==NULL) return ans;
   map<int,int>mp;
   queue<pair<Node*,int>>qt;
   qt.push({root,0}); //root,level
   while(!qt.empty()){
    auto it = qt.front();
    qt.pop();
    Node* node = it.first;
    int lev = it.second;
    // if(mp.find(lev)==mp.end()){
        mp[lev]= node->data;
    // }
   
    if(node->left) qt.push({node->left, lev-1});
    if(node->right) qt.push({node->right,lev+1});
   }
   for(auto x:mp){
    ans.push_back(x.second);
   }
   return ans;
}
int main(){
   Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);


    // Preorder(root);
    // cout<<endl;
    // Inorder(root);
    // cout<<endl;
    // PostOrder(root);
//    vector<int> result = levelOrder(root);
//    for(auto ans: result){
//     cout<<ans<<" ";
//    }

// vector<vector<int>> ans = LineByLine(root);
// for(auto it: ans){
//     for(auto val: it){
//         cout<<val<<" ";
//     }
//     cout<<endl;
   
// }
// vector<vector<int>> result = ZigZag(root);

//     // Print the result
//     cout << "Zigzag Level Order Traversal:" << endl;
//     for (auto level : result) {
//         for (int val : level) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

// vector<int>ans;
//  solveRight(root,ans,0);
//  for(auto it: ans){
//     cout<<it<<" ";
//  }
vector<int> ans = topView(root);
for(auto it: ans){
    cout<<it<<" ";
}

   return 0;
    // return 0;

}