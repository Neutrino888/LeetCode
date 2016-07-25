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
        ListNode* result = new ListNode (0);
        ListNode* iter=result;
       while(l1!=NULL || l2!=NULL){
            ListNode* mnode = new ListNode (0);
            iter->next = NULL;
            int temp1=0, temp2=0, temp3=0, temp4=0;
            if(l1!=NULL){
                temp1=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                temp2=l2->val;
                l2=l2->next;
            }
            iter->val=iter->val+temp1+temp2;
            if(iter->val>=10){
                iter->val-=10;
                temp4=1;
            }
//            iter->val+=temp3;
            if(l1!=NULL || l2!=NULL || temp4!=0){
                iter->next = mnode;
                iter=iter->next;
                iter->val+=temp4;
            }
        }
      
 return result;
    }
};
