//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
         int n=arr.size();
        int s=0,e=n-1;
        
        while(s<=e){
            if(arr[s]==0 && arr[e]==1){
                s++;
                e--;
            }
            else if(arr[s]==1 && arr[e]==0){
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
            else if(arr[s]==0 && arr[e]==0){
                s++;
            }
            else{
                e--;
            }
        }    
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends