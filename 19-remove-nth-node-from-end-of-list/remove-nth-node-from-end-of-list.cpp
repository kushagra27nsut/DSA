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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head ;
        int cnt = 0 ;
        while(curr != nullptr){
            cnt++ ;
            curr = curr->next ;
        }
        int c = cnt - n ;
        ListNode* dummy = new ListNode(0) ;
        dummy->next = head ;
        ListNode* tmp = dummy ;
        for(int i = 0 ; i < c ; i++){
            tmp = tmp->next ;
        }
        tmp->next = tmp->next->next ;
        return dummy->next ;
    }
};