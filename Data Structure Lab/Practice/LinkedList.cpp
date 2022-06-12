#include <iostream>
#include <cstring>
using namespace std;

struct listNode{

    int data;
    listNode *next;
};

listNode *one=new listNode;
listNode *two=new listNode;
listNode *three=new listNode;
listNode *four=new listNode;
listNode *five=new listNode;

void createList(){



one->data=12;
one->next=two;

two->data=3;
two->next=three;

three->data=14;
three->next=four;

four->data=5;
four->next=five;

five->data=16;
five->next=NULL;

}


void traverseList(listNode *current ){

    while(current != NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
void InsertAtBegin(int n)
{
    listNode *newNode=newNode;

    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void InsertAtEnd(list Node *current, int n)
{
    listNode  *newNode= new listNode
    newNode->data = n;
    newNode->next =Null;
    while(current->next!=Null)
    {
        current = current -> next;
    }
        current->next=newNode;
}
void insertAfter(listNode *current, int n)
{
   listNode *newNode =new listNode;

    newNode->data = n;
    newNode->next = current->next;
    current->next = newNode;
}
int main(){

createList();

listNode *head=new listNode;
head=one;

listNode *current=new listNode;
current=one;
traverseList(current);
}
