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
        ListNode* evendu = new ListNode(0);
        ListNode* odddu = new ListNode(0);
        ListNode* odd = odddu;
        ListNode* even = evendu;
        ListNode* temp = head;
        int cnt = 1;
        while(temp != NULL){
            if(cnt%2==0){
                even->next = temp;
                even = even->next;
            }
            else{
                odd->next = temp;
                odd = odd->next;
            }
            temp = temp->next;
            cnt++;
        }
        even->next = NULL;
        odd->next = evendu->next;
        return odddu->next;
    }
};