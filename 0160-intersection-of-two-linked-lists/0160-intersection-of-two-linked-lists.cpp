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
        int cnt1 = 0;
        int cnt2 = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=NULL){
            cnt1++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            cnt2++;
            tempB = tempB->next;
        }
        int dif = max(cnt1,cnt2) - min(cnt1,cnt2);
        ListNode* skipb = headB;
        ListNode* skip = headA;
        if(cnt1 > cnt2){
            while(dif!=0){
                skip = skip->next;
                dif--;
            }
        }
        else{
            while(dif!=0){
                skipb = skipb->next;
                dif--;
            }
        }
        while(skip!=NULL && skipb!=NULL){
            if(skip == skipb){
                return skip;
            }
            skip = skip->next;
            skipb = skipb->next;
        }
        return NULL;
    }
};