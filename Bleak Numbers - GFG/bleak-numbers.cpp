//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}
	int is_bleak(int n)
	{
	    // Code here.
	     for (int x = 1; x < n; x++) {
        if (x + countSetBits(x) == n) {
            return 0; // It's not a Bleak number
        }
    }
    return 1; 
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
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends