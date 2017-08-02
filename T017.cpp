#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
};
/*
ListNode* ReverseList(ListNode* pHead) {
        ListNode* p = pHead;
        vector<ListNode* > s;
		int count = 0;
        while(p){
            ++count;
            s.push_back(p);
            p = p->next;
        }
		//cout<<"size:"<<s.size()<<endl;
        for(int i=s.size()-1;i>0;--i){
            s[i]->next = s[i-1];
            cout<<s[i]->val<<endl;
        }
        s[0]->next = NULL;
		cout<<s[0]->val<<endl;
        return s[s.size()-1];
}
*/
/*
ListNode* ReverseList(ListNode* pHead) {
        
        ListNode* p = pHead;
        if(p==NULL){
            return p;
        }
        if(p->next==NULL){
            cout<<p->val<<endl;
            return p;
        }
        ListNode* pNext = p->next;
        ListNode* temp;
        p->next = NULL;
        while(pNext!=NULL){
            temp = pNext->next;
            pNext->next = p;
            p = pNext;
            pNext = temp;            
        }
        pNext = p;
        while(p){
            cout<<p->val<<endl;
            p = p->next;
        }
        return pNext;
}
*/
ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
        ListNode* p = new ListNode();
        ListNode* temp = p;
        ListNode* s1 = pHead1;
        ListNode* s2 = pHead2;        
        while(s1&&s2){
            if(s1->val<s2->val){
                p->next = s1;
                s1 = s1->next;
            }
            else{
                p->next = s2;
                s2 = s2->next;
            }
            p = p->next;
        }

		cout<<"here"<<endl;
        while(s1){
		cout<<"here1"<<endl;
            p = s1;
            p = p->next;
            s1 = s1->next;
        }
        while(s2){
		    cout<<"here2"<<endl;
            p = s2;
            p = p->next;
            s2 = s2->next;
			cout<<"here2\t"<<s2->val<<endl;
        }
        p = temp->next;
        delete temp;
        return p;
}
int main(){
	
	ListNode* p = new ListNode();
	ListNode* pp = new ListNode();
	pp->next = NULL;
	pp->val = 10;
	p->val = -1;
	ListNode* q = p;
	for(int i=0;i<4;i++){
		ListNode* s = new ListNode();
		s->next = NULL;
		s->val = i;
		q->next = s;
		q = s;
	}
	
	ListNode *m = Merge(p,p);
	while(m){
		cout<<m->val<<endl;
		m = m->next;
	}
	//ReverseList(p);
	return 0;
}
