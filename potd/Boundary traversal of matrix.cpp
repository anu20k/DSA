//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        
        int total = 2*m + 2*(n-2);
        
        int sr = 0;
        int sc=0;
        int er=n-1;
        int ec=m-1;
        int cnt=0;
        
       
            
                
                for(int i=0;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                cnt++;
            }
            sr++;
            for(int i=sr;i<=er;i++){
                ans.push_back(matrix[i][ec]);
                cnt++;
            }
             ec--;
            for(int i=ec;i>=0 && n>1;i--){
                ans.push_back(matrix[er][i]);
                cnt++;
            }
            er--;
            for(int i=er;i>=sr && m>1;i--){
                ans.push_back(matrix[i][sc]);
                cnt++;
            }
           
            
            
        
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
