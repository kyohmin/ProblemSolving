/*
Problem Name: 2. Add Two Numbers
Date        : Jan-07,2023
Link        : https://leetcode.com/problems/add-two-numbers/
Difficulty  : Medium
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0){
            ListNode* fakeNode = new ListNode(0);

            if(l1 == nullptr) l1 = fakeNode;
            if(l2 == nullptr) l2 = fakeNode;


            int digit = l1->val + l2->val;
            int tmpCarry = (digit+carry) / 10;
            digit = (digit + carry)%10;
            
            
            ListNode* tmp = new ListNode();
            tmp->val = digit;

            carry = tmpCarry;

            tail->next = tmp;
            tail = tail->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        head = head->next;
        return head;
    }
};

/*
[Self Reflection]
    How I solved: The problem requires basic knowledge on datastructure.
                Just create new node if needed.
*/