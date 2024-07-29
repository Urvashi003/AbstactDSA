#include<bits/stdc++.h>
using namespace std;

// void MonoStackIn(vector<int>&nums, vector<int>ans){
//     stack<int>st;
//     vector<int>help;
//     for(auto it: nums){
//         while(!st.empty() and st.top()>nums[it]){
//            int ele = st.top();
//            st.pop();
//            help.push_back(ele);

//         }
//         st.push(nums[it]);
//     }

//     for(auto it: help){
//         st.push(help[it]);
//     }
// }

// int main(){
//     vector<int>nums = {3,1,4,6,2,9};
//     vector<int>ans;
//     MonoStackIn(nums,ans);
// }


void Monotonic(vector<int>&nums,vector<int>&ans)
{
    stack<int>st;
   
    for(auto i:nums)
    {
        while(!st.empty() && st.top()> i)
        {
            st.pop();
        }
        st.push(i);
    }


    while(!st.empty())
    {
       ans.push_back(st.top());
       st.pop();
    }
    return ;
}
int main()
{
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int>ans;
    Monotonic(nums,ans);
    reverse(ans.begin(),ans.end());
    for(auto i:ans)
    {
        cout<<i<<" ";
    }


    return 0;
}
