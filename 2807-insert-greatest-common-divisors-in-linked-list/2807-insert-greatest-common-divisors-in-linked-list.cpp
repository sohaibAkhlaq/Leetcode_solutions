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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        while(temp2!=NULL){
            int val1 = temp1->val;
            int val2 = temp1->next->val;
            int val = gcd(val1,val2);
            ListNode* newnode = new ListNode(val);
            newnode->next = temp1->next;
            temp1->next = newnode;
            temp1 = temp2;
            temp2 = temp2->next;
        }
        return head;
    }
};