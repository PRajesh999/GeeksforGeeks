//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
         if(n == 1 || n == 2) return 1;
        if(n == 3) return 2;
        int a = 1, b = 1;
        int c = 2;
        for(int i=4; i<=n; i++){
            a = b;
            b = c;
            c = (a+b)%1000000007;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends