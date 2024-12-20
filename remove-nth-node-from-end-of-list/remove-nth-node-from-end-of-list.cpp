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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count = 0;
        
        ListNode* curr = head;
        while(curr){
            count++;
            curr = curr->next;
        }
        
        int posFromStart = count-n;
        curr = head;
        if(posFromStart == 0){
            return head->next;
        }
        
        for(int i=1;i<posFromStart;i++){
            curr = curr->next;
        }
        
    
          
         curr->next = curr->next->next;
    
        
        return head;
        
        
        
    }
};