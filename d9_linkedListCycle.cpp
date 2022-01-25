//141. Linked List Cycle
//https://leetcode.com/problems/linked-list-cycle/

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
    bool hasCycle(ListNode *head) {
        if(head == NULL && head->next == NULL)
            return false;
        ListNode *fastNode = head;
        ListNode *slowNode = head;
        while(fastNode->next && fastNode->next->next)
        {
            fastNode = fastNode->next->next;
            slowNode = slowNode->next;
            
            if(fastNode == slowNode)
                return true;
        }
        return false;
    }
};