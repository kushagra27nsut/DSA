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
    int length(ListNode* head) {
        int i = 0 ;
        ListNode* curr = head ;
        while(curr != nullptr) {
            curr = curr->next ;
            i++ ;
        }
        return i ;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int n = length(head) ;
        if (n == 0) return head ;
        k = k%n ;
        if( head->next == nullptr || k == 0 ){
            return head ;
        }
        ListNode* tmp = head ;
        ListNode* sec = head ;
        for(int i = 1 ; i < (n-k) ; i++){
            tmp = tmp->next ;
        }
        ListNode* prev = tmp->next ;
        tmp->next = nullptr ;
        head = prev ;
        while(prev->next != nullptr) {
            prev = prev->next ;
        }
        prev->next = sec ;
        return head ;
    }
};