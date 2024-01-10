/*
Problem Name: 141. Linked List Cycle
Date        : Jan-10,2024
Link        : https://leetcode.com/problems/linked-list-cycle/description/
Difficulty  : Easy
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while(fastPtr!=nullptr&&slowPtr!=nullptr&&fastPtr->next!=nullptr){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;

            if(fastPtr == slowPtr) return true;
        }

        return false;
    }
};

/*
[Self Reflection]
    How the solution works: Make two pointers and give a different movemnet speed.
                            If two pointers meet, it indicates that there is a cycle.
*/