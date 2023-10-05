//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    long long int subarray(string s, int k){
        
        int arr[26]={0};
        long long int cnt=0;
        int distinct=0;
        int i=0;
        int left=0;
        
        for(i=0;i<s.size();i++){
            if(arr[s[i]-'a']==0){
                distinct++;
                
            }  
            arr[s[i]-'a']++;
                while(distinct>k){
                    arr[s[left]-'a']--;
                    
                    if(arr[s[left]-'a']==0){
                        distinct--;
                    }
                    left++;
                }
                
                cnt+=i-left+1;
            
        }
        
        return cnt;
    }
     
    long long int substrCount (string s, int k) {
    	
    	return subarray(s, k) - subarray(s, k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends
