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
    ListNode* reverse(ListNode* &temp){
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
        }
        return prev;
    }
    ListNode* checkkth(ListNode* temp, int k){
        k--;
        while(temp!=NULL && k--){
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        while(temp!=NULL){
            ListNode* kth = checkkth(temp,k);
            if(kth == NULL){
                break;
            }
            ListNode* nextnode = kth->next;
            kth->next = NULL;
            ListNode* oldhead = temp;
            ListNode* newhead = reverse(temp);
            if(prevNode == NULL){
                head = newhead;
            }
            else{
                prevNode->next = newhead;
            }
            oldhead->next = nextnode;
            prevNode = oldhead;
            temp = nextnode;
        }
        return head;
    }
};