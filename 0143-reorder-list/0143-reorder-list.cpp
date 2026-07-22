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
    void reorderList(ListNode* head) {
         if(head == nullptr) return;
        ListNode* curr=head;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(curr!=nullptr){
            if(curr->next==nullptr){
                temp->next=curr;
                temp=curr;
                break;
            }
            ListNode* tail=curr;
            while(tail->next!=nullptr){
                tail=tail->next;
            }
            ListNode* prev=curr;
            while(prev->next!=tail){
                prev=prev->next;
            }
            ListNode* nextnode=curr->next;
            prev->next=nullptr;
            temp->next=curr;
            temp=temp->next;
            temp->next=tail;
            temp=temp->next;
            // prev->next=nullptr;
            curr=nextnode;
        }
        temp->next = nullptr;
        delete dummy;

       
        
    }
};