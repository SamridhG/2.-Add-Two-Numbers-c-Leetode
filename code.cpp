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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result=NULL,*temp;
        int sum,rem=0;
        while(l1!=NULL && l2!=NULL)
        {
            sum=l1->val+l2->val+rem;
            rem=sum/10;
            sum=sum%10;
            if(result==NULL)
            {
                result= new ListNode(sum);
                temp=result;
            }
            else
            {
                temp->next= new ListNode(sum);
                temp=temp->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {     sum=l1->val+rem;
            rem=sum/10;
            sum=sum%10;
             temp->next= new ListNode(sum);
                temp=temp->next;
                        l1=l1->next;
            }
        }
        else if(l2!=NULL)
        {
            while(l2!=NULL)
            {
                  sum=l2->val+rem;
            rem=sum/10;
            sum=sum%10;
             temp->next= new ListNode(sum);
                temp=temp->next;
                        l2=l2->next;
            }
        }
        
        if(rem!=0)
        {
            temp->next= new ListNode(rem);
                temp=temp->next;
        }
        return result;
    }
};
