//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        
        long long sum=1;
        long long i=2;
        
        if(N==1){
            return 0;
        }
        
        while(i*i<=N){
            
            if(N%i==0){
                if(i*i !=N){
                    sum= sum+ i + N/i;
                }
                else{
                    sum= sum+ i;
                }
                
            }
            i++;
        }
        
        if(sum == N){
            
            return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
