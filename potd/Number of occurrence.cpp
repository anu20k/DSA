//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

    void binary(int arr[], int l, int n, int x, int &ans){
        
        if(l>n){
            return;
        }
        int mid = (l+n)/2;
        if(arr[mid] == x){
            ans++;
        }
        binary(arr, l, mid-1, x, ans);
        binary(arr, mid+1, n, x, ans);
    }

	int count(int arr[], int n, int x) {
	    
	    int ans = 0;
	    
	    binary(arr, 0, n, x, ans);
	    
	    return ans;
	    
	 }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
