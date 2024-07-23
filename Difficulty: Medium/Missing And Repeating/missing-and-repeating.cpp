//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int result;
        unordered_map<int,int> mp;
        vector<int> resultArr;
        int ans=0;
        for(int i=1;i<=arr.size();i++){
            resultArr.push_back(i);
        }
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second>1) result=it.first;
        }
        for(int i=0;i<resultArr.size();i++){
            if(mp.find(resultArr[i])==mp.end())ans=resultArr[i];
        }
        
        return {result,ans};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends