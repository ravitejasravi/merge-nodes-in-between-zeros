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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* sum = new ListNode(-1);
        ListNode* add = sum;
        int count = 0;

        head = head -> next;

        while(head != NULL) {

            if(head -> val != 0) 
                count += head -> val;
            
            else {
                head -> val = count;
                add -> next = head;
                count = 0;
                add = add -> next;
            }
            head = head -> next;

        }
        add -> next = NULL;
        return sum -> next;
    }
};