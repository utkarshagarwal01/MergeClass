
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
char item;
struct node* link;
}Node;
typedef enum{false,true}bool;

Node* getNode()
{
    Node* t=(Node*)malloc(sizeof(Node));
    if(t==NULL)
        printf("Insufficient Memory");
        t->link=t;
    return t;
}

Node* insertCircleList(Node* h,char x)
{
    //printf("inside");
    Node* t=h->link,*prev=h,*newnode;
    while(t!=h && t->item<x)
    {
        prev=t;
        t=t->link;
    }
    newnode=getNode();
    newnode->item=x;
    newnode->link=t;
    prev->link=newnode;
    return h;
    }
Node* merge(Node* headA,Node* headB)
{
    Node *result=getNode();
    Node *i=headA->link,*j=headB->link;
    while(i!=headA && j!=headB)
    {
        if(i->item==j->item)
        {
            result=insertCircleList(result,i->item);
            i=i->link;
        }
        else if(i->item < j->item)
        {
            result=insertCircleList(result,i->item);
            i=i->link;
        }
        else
        {
            result=insertCircleList(result,j->item);
            j=j->link;
        }
    }
    while(i!=headA)
    {
        result=insertCircleList(result,i->item);
        i=i->link;
    }
    while(j!=headB)
    {
        result=insertCircleList(result,j->item);
        j=j->link;
    }
    return result;
}
void display(Node* head)
{
    Node* temp=head->link;
    if(head==temp)
        printf("\nEmpty List\n");
    else
    while(temp!=head){
        printf("%c",temp->item);
        temp=temp->link;
    }
}
Node* input(char s[])
{
        char x;
        printf("Enter %s character List, terminated by enter:\n",s);
        Node* a=getNode();
        while(true)
        {
            x=getchar();
            if(x=='\n') break;
            a=insertCircleList(a,x);
        }
        return a;
}
int main()
{
    Node *a,*b;
    a=input("First");
    b=input("Second");
    display(merge(a,b));
        return 0;
}

#ifndef MERGE_C_H
#define MERGE_C_H


class Merge.c
{
    public:
        Merge.c();
        virtual ~Merge.c();
    protected:
    private:
};

#endif // MERGE_C_H
