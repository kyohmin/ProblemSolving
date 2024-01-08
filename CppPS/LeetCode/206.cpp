/*
Problem Name: 206. Reverse Linked List
Date        : Jan-09,2024
Link        : https://leetcode.com/problems/reverse-linked-list/description/
Difficulty  : Easy
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = nullptr;
        while(head != nullptr){
            ListNode* tmpNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = tmpNode;
        }

        return prevNode;
    }
};

/*
[Self Reflection]
    How the solution works: Keep track of both forward vector and backward vector and connect current head to backward vector.
*/