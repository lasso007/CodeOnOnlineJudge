#include<iostream>
using namespace std;
struct ListNode{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void PrintListNode(const ListNode *p){
    while(p){
        cout<<p->val<<"\t";
        p = p->next;
    }
    cout<<endl;
}
ListNode *deleteDuplication01(ListNode *Head){
    ListNode *p = Head;
	if(p==NULL||p->next==NULL)
        return p;
    ListNode *q = p->next;
    ListNode *tmp;
    while(q){
        if(q->val!=p->val){
            p->next = q;
            p = p->next;
            q = q->next;
        }else{
            tmp = q;
            q = q->next;
            delete(tmp);
        }     
    }
    p->next = NULL;
 
    /*
    while(q){
        if(q->val!=p->val){
            p->next = q;
            p = p->next;
        }
        q = q->next;
    }
    p->next = NULL;
    */
    return Head;
}

ListNode *deleteDuplication02(ListNode *pHead){
        if (pHead==NULL)
            return NULL;
        if (pHead!=NULL && pHead->next==NULL)
            return pHead;
                  
        ListNode* current;
          
        if ( pHead->next->val==pHead->val){
            current=pHead->next->next;
            while (current != NULL && current->val==pHead->val)
                current=current->next;
            return deleteDuplication02(current);                    
        }
          
        else {
            current=pHead->next;
            pHead->next=deleteDuplication02(current);
            return pHead;
        }

}

int main(){
    ListNode *Head = new ListNode(1);
    ListNode *p = new ListNode(1);
    Head->next = p;
    ListNode *q = new ListNode(2);
    p->next = q;
    p = q;
    q = new ListNode(2);
    p->next = q;
    p = q;
    q = new ListNode(2);
    p->next = q;
    p = q;
    q = new ListNode(3);
    p->next = q;
    p = q;
    q = new ListNode(3);
    p->next = q;
    p = q;
    q = new ListNode(4);
    p->next = q;
    p = q;
    PrintListNode(Head);
    //ListNode * r = deleteDuplication01(Head);
    ListNode * r = deleteDuplication02(Head);
    PrintListNode(r); 
    return 0;  
}
