//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void helper(vector<int>&nums, int n, int sum, int index,vector<int>&ans){
    
        if(index>=nums.size()){
            ans.push_back(sum);
            return;
        }
        
        helper(nums,n,sum+nums[index],index+1,ans);
        helper(nums,n,sum,index+1,ans);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int index = 0;
        int sum =0;
        helper(arr,N,sum,index,ans);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends