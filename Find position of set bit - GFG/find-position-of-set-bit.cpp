//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
        // code here
        int pos = 0;
        int temp = 0;
        int count  =0;
        if(n==0) return -1;
        while(n > 0){
            
            if((n&1)==1 && temp == 0){
                temp = pos;
            }
            
            
            if(count > 1){
                return -1;
            }
            else if((n&1)==1){
                count++;
            }
            
            
            pos++;
            
            
            n = n>>1;
        }
        
        
        return temp+1;
        
        
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends