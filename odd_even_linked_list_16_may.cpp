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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* curr=head;
        ListNode* z=head->next;
        while(curr){
            ListNode* temp=curr->next;
            if(temp) curr->next=temp->next;
            curr=temp;
        }
        
        curr=head;
        while(curr->next) curr=curr->next;
        curr->next=z;
        return head;
    }
};