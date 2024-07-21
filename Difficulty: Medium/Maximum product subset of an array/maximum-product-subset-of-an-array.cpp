//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
         int n = arr.size();
        if(n==1)return arr[0];
        long long int zc = 0;
        long long int nc = 0;
        long long mod = 1e9+7;
        
        long long int prod = 1;
        
        long long int maxn = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zc++;
                continue;
            }
            else if(arr[i]<0){
                nc++;
                if(maxn<arr[i]){
                    maxn = arr[i];
                }
            }
            prod=(prod*arr[i])%mod;
        }
        
        if(zc==n)return 0;
        else if(nc==1 && zc+nc==n){
            return 0;
        }
        else if(nc&1){
            prod = prod/maxn;
        }
        return prod;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends