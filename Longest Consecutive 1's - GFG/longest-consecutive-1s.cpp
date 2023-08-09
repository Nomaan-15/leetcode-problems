//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
       int count = 0;
    int maxCount = 0;

    while (N > 0) {
        if (N & 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
        
        N >>= 1;  // Right-shift N to check the next bit
    }

    return maxCount;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends