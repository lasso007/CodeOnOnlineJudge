#include<iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead==NULL||pHead->next==NULL)
            return pHead;
        ListNode *r0 = NULL, *r1 = pHead, *r2 = pHead->next;
        ListNode *tmp, *res;
        while(r2){
            if(r1->val!=r2->val){
                if(r0==NULL)
                    res = r1;
                r0 = r1;
                r1 = r1->next;
                r2 = r2->next;
            }else{
                cout<<"r1:"<<r1->val<<endl;
                while(r2&&r1->val==r2->val)
                    r2 = r2->next;
                cout<<"r2:"<<r2->val<<endl;
                //tmp = r1;
                while(r1!=r2){
                    tmp = r1;
                    r1 = r1->next;
                    delete tmp;                    
                }
                if(r0)   
                    r0->next = r1;
                r2 = r2->next;
            }
        }
        return res;
    }
};
void printList(ListNode *p){
    while(p){
        cout<<p->val<<"\t";
        p = p->next;
    }
    cout<<endl;
}
int main(){
    ListNode *Head = new ListNode(2);
    ListNode *q = Head;
    ListNode *tmp = new ListNode(2);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(3);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(3);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(3);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(3);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(4);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(4);
    q->next = tmp;
    q = q->next;
    tmp = new ListNode(5);
    q->next = tmp;
    q = q->next;
    // print 
    printList(Head);
    Solution so;
    q = so.deleteDuplication(Head);    
    // print 
    printList(q);
    return 0;
}
