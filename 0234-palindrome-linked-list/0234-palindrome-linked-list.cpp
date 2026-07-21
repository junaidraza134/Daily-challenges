/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr=head;
        while(curr!=nullptr){
            st.push(curr);
            curr=curr->next;
        }
        curr=head;
        while(!st.empty() && curr!=nullptr){
            ListNode* temp=st.top();
            st.pop();
            if(temp->val!=curr->val){
                return false;
            }
            curr=curr->next;
           
        }
        return true;
        
    }
};