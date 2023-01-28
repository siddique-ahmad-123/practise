#include <bits/stdc++.h>
using namespace std;


struct Node 
{
int data;
Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[],int n){
    int i;
    Node *t,*last;
    first= new Node;
    
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}
void create2(int B[],int n){
    int i;
    Node *t,*last;
    second= new Node;
    
    second->data=B[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}

void display(Node *p){

    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
}
}

int add(Node *p){
    int sum=0;
    while(p){
   sum+=p->data;
   p=p->next;
    }
    return sum;
}

int Max(Node *p){
    int m=INT_MIN;

    while(p){
       m=max(m,p->data);
       p=p->next;
    }

    return m;
}

int Search(Node *p, int key){
    int ans=0;
    while(p){
        if(key==p->data){
            ans=p->data;
        }

        p=p->next;
    }
    return ans;
}

void Search2(Node *p,int key){
    Node *q=NULL;

    while(p){
        if(p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
    
}

int Delete(int pos){
    Node *p=first;
    Node *q=NULL;
    int x=-1;

    if(pos==0){
      first=first->next;
      x=first->data;
      delete p;

    }

    else{
     
   for(int i=0;i<pos-1 && p;i++){
    q=p;
    p=p->next;
   }

   if(p){
    q->next=p->next;
    x=p->data;
    delete p;
   }
    }

    return x;
}

int count(Node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void Reverse(Node *p){
    Node *q=p;
    int i=0;
    int *B;
    B=new int[count(p)];

    while(q){
        B[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q){
        q->data=B[i];
        q=q->next;
        i--;
    }

}

void ReverseByLinks(Node *p){
    Node *q=NULL;
    Node *r=NULL;

    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void concatenate(Node *p, Node*q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}



int main(){
    
    int A[]={3,2,9,6,5,8};
    int B[]={1,2,3,42,52,6};

    create(A,6);
    create2(B,6);
    display(first);
    cout<<endl;
    display(second);
    cout<<endl<<endl;

   /* cout<<endl;
    cout<<add(first)<<endl;

    cout<<Max(first)<<endl;

    cout<<Search(first,9)<<endl;

    Search2(first,8);
    display(first);

    Delete(3);
    cout<<endl;
    display(first);
     cout<<endl;
     
     Reverse(first);
     cout<<endl;
     display(first);
     cout<<endl;
     
    cout<<endl;
    ReverseByLinks(first);
    display(first);
*/

concatenate(first,second);
display(third);

    return 0;
}









