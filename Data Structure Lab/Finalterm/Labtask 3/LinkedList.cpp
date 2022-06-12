#include<iostream>
using namespace std;

struct Node{

    public:

        int data;
        Node* next;

        Node(){
            data = 0;
            next = NULL;
        }
      };

class LinkedList{

    public:

        Node* head;
        Node* curr;

        LinkedList(){
            head = NULL;
            curr = NULL;
        }

        void Insert(int a){

            Node* bc = new Node();
            bc->data = a;

            if (head == NULL){
                head = bc;
                curr = bc;
            }

            else{
                curr->next = bc;
                curr = bc;
            }
        }

        void Printlist(){

            Node* temp = head;

            while (temp!=NULL){
                cout <<temp->data <<" ";
                temp = temp->next;
            }
        }

        void Searchlist(int a){

            Node* temp = head;

            while (temp!=NULL){

                if (temp->data == a){
                    cout << "Found Data";
                }

                else{
                    cout << "Not Found Data";
                }

                temp = temp->next;
            }
        }

        void Deletelist(int a){

            Node* temp = head;
            Node* ch;
            ch = head;

            while (temp!=NULL){

                if (temp->data == a){
                    ch->next = temp->next;
                    temp->next = NULL;
                    cout << "\nAfter Deleting Data:";
                    break;
                }

                ch = temp;
                temp = temp->next;
            }
        }
};

int main(){

    LinkedList Lds;

    Lds.Insert(1);
    Lds.Insert(2);
    Lds.Insert(3);
    Lds.Insert(4);
    Lds.Insert(5);
    Lds.Insert(6);
    Lds.Insert(7);
    Lds.Insert(8);
    Lds.Insert(9);
    Lds.Insert(10);

    Lds.Printlist();

    Lds.Deletelist(3);

    Lds.Printlist();

    return 0;
}
