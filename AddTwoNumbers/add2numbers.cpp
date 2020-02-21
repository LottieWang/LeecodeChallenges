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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans =  new ListNode(-1);
        ListNode * head = ans;
        ListNode * lhead = l1;
        ListNode * rhead = l2;
        int lvalue = 0;
        int rvalue = 0;
        int value = 0;
        int add_one = 0;
        while (lhead != NULL || rhead != NULL){
            //printf("lvalue = %d, rvalue = %d, value = %d",lvalue, rvalue, value);
            if (lhead!= NULL){
                lvalue = lhead->val;
                lhead = lhead->next;
            }
            if (rhead != NULL){
                rvalue = rhead->val;
                rhead = rhead->next;
            }
            value = lvalue+rvalue+add_one;
            //printf("value in this round is %d, lvalue = %d, rvalue = %d",value, lvalue, rvalue);
            add_one = value / 10;
            value = value % 10;
            ListNode * next = new ListNode(value);
            head->next = next;
            head = head->next;
            // value = 0;
            // lvalue = 0;
            // rvalue = 0;
            value=rvalue=lvalue=0;
        }
        if (add_one == 1){
            ListNode * next = new ListNode(add_one);
            head->next = next;
        }
        head = ans;
        ans = ans->next;
        delete(head);
        // new - delete !!
        return ans;
    }
};
