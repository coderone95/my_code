/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    //node *head;
};

void insert(int val)
{
    node *temp, *p,*head;
    temp = new node ;
    temp-> next = NULL;
    temp-> data = val;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        p = head ;
        while(p->next != NULL)
            p = p -> next;
        p->next = temp;
    }
}

int main()
{
    int d;
    cin >> d;
    insert(d);
    return 0;
}
