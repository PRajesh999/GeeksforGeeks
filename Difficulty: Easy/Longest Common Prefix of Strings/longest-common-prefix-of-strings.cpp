//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans="";
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        
        while(i<arr[0].size())
        {
            if(arr[0][i]==arr[n-1][i]){
            ans+=arr[0][i];
            i++;
            }
            else
            {
                break;
            }
        }
       if(!ans.empty())
       return ans;
       return "-1";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends