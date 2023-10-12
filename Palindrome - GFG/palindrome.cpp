//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int ans = 0;
		    int rev = n;
		    while(n > 0){
		       int temp = n%10;
		        n = n/10;
		        ans = ans * 10 + temp;
		    }
		    
		    if(ans==rev){
		        return "Yes";
		    }
		    
		   return "No";
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends