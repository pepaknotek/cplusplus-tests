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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i = 0;
        ListNode* zacatek = new ListNode();
        ListNode* temp = zacatek;
        
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int soucet = 0;
            if(l1 != NULL){
                soucet += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                soucet += l2->val;
                l2 = l2->next;
            }
            ListNode*  nova=new ListNode();
            soucet += carry;
            carry = soucet / 10;
            nova->val = soucet % 10;
            zacatek->next = nova;
            zacatek = zacatek->next;
        }
        if(carry > 0){
            zacatek->next =new ListNode(carry);
            zacatek = zacatek->next;
        }
    return temp->next;
    }
};
