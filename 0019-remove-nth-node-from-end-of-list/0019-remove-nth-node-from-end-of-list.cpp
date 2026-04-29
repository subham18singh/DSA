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
        if(n == 1 && head->next == NULL){
            return NULL;
        }
        
        ListNode* count = head;
        int cnt = 0;
        while(count != NULL){
            cnt++;
            count = count->next;
        }
        if(cnt == n){
            return head->next;
        }
        int del = cnt - n + 1;
        cnt = 1;
        ListNode* temp = head;
        while(cnt < del-1){
            temp = temp->next;
            cnt++;
        }
        ListNode* dele = temp->next;
        temp->next = dele->next;
        delete dele;
        return head;
    }
};