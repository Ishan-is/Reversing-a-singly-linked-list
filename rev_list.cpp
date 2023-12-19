#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;   node *next;
};
node *HEAD = nullptr;

void Create_node(int input)
{
    
    node *temp = new node;
    temp->data = input;
    temp->next = nullptr;
    if(HEAD != nullptr)
    {
        temp->next = HEAD;
    }
    HEAD = temp;

}
int Display_list();
void Reverse_list();
int main()
{
    Create_node(5);
    Create_node(4);
    Create_node(3);
    Create_node(2);
    Create_node(1);
    cout<<"The list before reversing is: ";
    Display_list();
    Reverse_list();
    cout<<"\nThe link after reversing is: ";
    Display_list();
}
int Display_list()
{
    node*temp = HEAD;
    while(temp!= nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
void Reverse_list()
{
    node*current = HEAD;
    node*prev = nullptr; node*next = nullptr;
    while(current!=nullptr)
    {
        next = current->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    HEAD = prev;
}
