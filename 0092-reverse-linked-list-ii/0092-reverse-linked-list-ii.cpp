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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        if(head == nullptr || left == right)
            return head;
        for(int i=1;i<left;i++){
            prev=curr;
            curr=curr->next;
        }
        ListNode* start=prev;
        ListNode* tail=curr;
        
        for(int i=left;i<=right;i++){
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }

        if(start!=nullptr){
            start->next=prev;
        }else{
            head=prev;
        }
        tail->next=curr;
        return head;

         

         
        
    }
};