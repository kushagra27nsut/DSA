/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1 = 0 ;
        int c2 = 0 ;
        ListNode* cur1 = headA ;
        ListNode* cur2 = headB ;
        while(cur1 != nullptr){
            c1++ ;
            cur1 = cur1->next ;
        }
        while(cur2 != nullptr){
            c2++ ;
            cur2 = cur2->next ;
        }
        ListNode* curr1 = headA ;
        ListNode* curr2 = headB ;
        if(c1 < c2){
            int d = c2-c1 ;
            for(int i = 0 ; i < d ; i++){
                curr2 = curr2->next ;
            }
        }
        else{
            int d = c1-c2 ;
            for(int i = 0 ; i < d ; i++){
                curr1 = curr1->next ;
            }
        }
        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1 == curr2) return curr1 ;
            curr1 = curr1->next ;
            curr2 = curr2->next ;
        }
        return nullptr ;
    }
};