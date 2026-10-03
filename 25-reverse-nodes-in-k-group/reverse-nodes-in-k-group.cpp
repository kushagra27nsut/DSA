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
    ListNode* getKthNode(ListNode* current, int k) {
            while (current != nullptr && k > 1) {
                current = current->next;
                k--;
            }

            return current;
        }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head ;
        ListNode* prev = nullptr ;
        while(curr){
            ListNode* nxt = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nxt ;
        }
        return prev ;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k <= 1) {
            return head;
        }
        ListNode* tmp = head ;
        ListNode* prev = nullptr ;
        while(tmp != nullptr){
            ListNode* kthnode = getKthNode(tmp,k);
            if (kthnode == nullptr) {
                if (prev != nullptr) {
                    prev->next = tmp;
                }
                break;
            }
            ListNode* nxt = kthnode->next ;
            kthnode->next = nullptr ;
            reverse(tmp) ;
            if (tmp == head) {
                head = kthnode;
            } else {
                prev->next = kthnode;
            }
            prev = tmp ;
            tmp = nxt ;
        }
        return head ;
    }
};