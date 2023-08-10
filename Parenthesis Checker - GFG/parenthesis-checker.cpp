//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool isMatching(char open , char  close){
return (open == '(' && close == ')' || open == '{' && close == '}' ||  open == '[' && close ==']');
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0;i<x.length();i++){
            
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                st.push(x[i]);
            }
            else{
                if(st.empty() || isMatching(st.top(),x[i])==false){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends