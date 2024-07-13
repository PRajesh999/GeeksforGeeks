//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        reverse(S.begin(), S.end());
        int start=0,length=S.size();
        for(int i=0;i<=length;i++)
        {
            if(S[i]=='.' || i==length )
            {
                reverse(S.begin()+ start, S.begin()+i);
                start = i+1;
            }
        }
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends