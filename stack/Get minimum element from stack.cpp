//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           int min_ele = INT_MAX;
           stack<int>st =s;
           
           if(st.empty()){
               return -1;
           }
           while(!st.empty()){
               
               min_ele = min (min_ele , st.top());
            //   s1.push(s.top());
               st.pop();
           }
           
        //   while(s1.empty()){
        //       s.push(s1.top());
        //       s1.pop();
        //   }
           
           return min_ele;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           int n=0;
           if(!s.empty()){
               
               n= s.top();
               s.pop();
           }
           else{
               return -1;
           }
           
           return n;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
