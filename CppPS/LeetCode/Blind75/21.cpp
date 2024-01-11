/*
Problem Name: 21. Merge Two Sorted Lists
Date        : Jan-11,2024
Link        : https://leetcode.com/problems/merge-two-sorted-lists/
Difficulty  : Easy
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while(list1 && list2){
            if(list1->val < list2->val){
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        if(list1) tail->next = list1;
        if(list2) tail->next = list2;

        return dummy->next;
    }
};

/*
[Self Reflection]
    How the solution works: The important factor is keep tracking the tail node and decide which one to add.
*/