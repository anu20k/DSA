//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    
    Node* reverse(Node *head){
        
        Node* prev = NULL;
        Node* curr =head;
        Node* next =NULL;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    Node *compute(Node *head)
    {
       
       Node* curr = reverse(head);
    //   Node* temp = new Node(curr->data);;
       Node* ans = curr;
       
       while(curr->next!=NULL){
           
           if(curr->data > curr->next->data){
            //   temp->next = new Node(curr->next->data);
               curr->next=curr->next->next;
            //   temp = temp->next;
           }
           else{

               curr=curr->next;
               
               
           }
       }
       
       head = reverse(ans);
       
       return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends
