//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        
        long long int num;
        
        
        if(s.size()<3){
            num = stoi(s);
            if(num%8==0){
                return 1;
            }
            
        }
        
        for(int i=0;i<s.size();i++){
            int temp = s[i]-'0';
            num = num*10 + temp;
            // cout<<<<" ";
        }
        
        if(num%8==0){
            
            return 1;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends
