//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> findThePattern(int n) {
        // code here
        
        
        vector<string>ans;
        int k=0;
        for(int i=0;i<n;i++){
            
            string temp;
            if(i== 0 || i== n-1){
                   
                 for(int j=0;j<n;j++){
                
                 temp+=k+65;
                 k++;
                
            }
            }
            
            else{
                
                temp+=k+65;
                k++;
                for(int j=0;j<n-2;j++){
                    temp+='$';
                }
                temp+=k+65;
                k++;
            }
            
            ans.push_back(temp);
            
                
            
            
        }
        return ans;
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
        vector<string> v = ob.findThePattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends
