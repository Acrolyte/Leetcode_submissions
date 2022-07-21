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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        ListNode* result;
        if(head1->val < head2->val){
            result = head1;
            result->next = mergeTwoLists(head1->next,head2);
        }
        else{
            result = head2;
            result->next = mergeTwoLists(head1,head2->next);
        }
        return result;
    }
};