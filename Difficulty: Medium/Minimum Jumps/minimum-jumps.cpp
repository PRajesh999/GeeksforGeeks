//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1)return 0;
        if(arr[0]==0)return -1;
        int moves=0;
        int ans=0;
        while(moves<n+1){
            int temp=0;
            int ind=-1;
            if(arr[moves]+moves>=n-1){
                ans++;
                break;
            }
            if(arr[moves]==0&&moves<n-1)return -1;
            int t=0;
            for(int j=moves+1;j<moves+arr[moves]+1;j++){
                if(temp<=arr[j]+t){
                    temp=arr[j]+t;
                    ind=j;
                }
                    t++;
            }
            // cout<<ind<<" ";
           moves=ind; 
           ans++;
        }
        return ans;

    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends