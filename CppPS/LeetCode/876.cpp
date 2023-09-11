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
    ListNode* middleNode(ListNode* head) {
        ListNode *middle = head;
        ListNode *end = head;

        int cnt = 0;
        while(end->next != nullptr){
            if(cnt % 2 == 0){
                middle = middle-> next;
            }
            end = end-> next;
            cnt++;
        }

        return middle;
    }
};