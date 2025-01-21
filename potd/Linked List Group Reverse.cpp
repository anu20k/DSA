//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        
        vector<int> arr;
    
    // Step 1: Extract the data into an array
    while (head != NULL) {
        arr.push_back(head->data);
        head = head->next;
    }
    
    // Step 2: Reverse every k-group in the array
    int i=0;
    
    for (i = 0; i + k <= arr.size(); i += k) {
        reverse(arr.begin() + i, arr.begin() + i + k);
    }
    
   
    k = arr.size()%k;
    reverse(arr.begin() + i, arr.begin() + i+ k);
    // Step 3: Construct the new linked list
    Node* dummy = new Node(0); // Dummy node
    Node* temp = dummy;
    for (int val : arr) {
        temp->next = new Node(val); // Create and link the new node
        temp = temp->next;
    }
    
    // Step 4: Return the head of the new linked list
    return dummy->next;
       
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

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
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends
