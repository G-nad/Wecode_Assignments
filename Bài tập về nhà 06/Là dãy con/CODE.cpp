#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Node{
    int val;
    Node* next;
};

struct List{
    Node *head, *tail;
    int x;
};

void list_initializing(List &l){
    l.head = l.tail = NULL;
}
void add_tail(List &l, int x){
    Node*p = new Node;
    p->val = x;
    p->next = NULL;

    if (l.head == NULL){
        l.head = l.tail = p;
    } else {
        l.tail->next = p;   
        l.tail = p;
    }
}

void xuat(List &l){
    for(Node *p = l.head; p != NULL; p = p->next){
        cout << p->val << " ";
    }
    cout << endl;
}


bool is_subsequence(List &l1, List &l2) {
    Node *p1 = l1.head;
    Node *p2 = l2.head;
    for (; p2 != NULL ; p2 = p2->next) {
        if (p1 != NULL && p1->val == p2->val) p1 = p1->next;
    }
    return p1 == NULL;
}



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    List lists[2];

    for(int i = 0; i < 2; i++){
        list_initializing(lists[i]);
        int x;
        do{
            cin >> x;
            if (x != -1) add_tail(lists[i], x);
            else break;
        } while(true);
    }

    if ( is_subsequence(lists[0], lists[1])) cout << "TRUE";
    else cout << "FALSE";


    return 0;
}