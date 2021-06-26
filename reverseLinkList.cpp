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
    ListNode* reverseList(ListNode* head) {
        
        //Solution #01 (It also got accepted without any warnings)
        /*
        vector<int>v;
        ListNode *location = NULL;
        
        location = head;
        
        while(location != NULL)
        {
            v.push_back(location->val);
            location = location->next;
        }
        
        location = head;
        
        for(int i = v.size()-1; i >= 0; i--)
        {
            location->val = v[i];
            location = location->next;
        }
        
        return head;
        */
        
        //Solution #02(Maybe a better one)
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *tempNext = NULL;
        
        while(current != NULL)
        {
            tempNext = current->next;
            current->next = prev;
            prev = current;
            current = tempNext;
        }
        
        head = prev;
        
        return head;
    }
};
