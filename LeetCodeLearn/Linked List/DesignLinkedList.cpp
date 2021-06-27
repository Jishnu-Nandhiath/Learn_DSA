struct Node{
        int data;
        struct Node *next;
        };  
class MyLinkedList {
public:
    Node *Head;
    /** Initialize your data structure here. */
    MyLinkedList() {
        Head = NULL;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {        
        Node *tmp = Head;
        int i = 1;
        if(!index)
            return Head->data;
        while(tmp -> next && i<=index)
        {
            tmp = tmp->next;
            i++;
        }
        if(i-1 == index)
            return tmp->data;

        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *tmp = new Node;
        tmp->data = val;
        tmp->next = Head;
        Head = tmp;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        struct Node *tmp = new Node;
        tmp -> data = val;
        tmp -> next = NULL;
        Node *itr = Head;
        if(!Head)
        {
            Head = tmp;
            return;
        }
 
        while(itr->next)itr = itr -> next;
            itr -> next = tmp;

 
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node *tmp = new Node;
        tmp -> data = val;
        tmp -> next = NULL;
        int i = 1;
        Node *prev = new Node;
        Node *itr = Head;
        if(index == 0 )
        {
            addAtHead(val);
            return;
        }
        else if(Head != NULL)
        {
        while(itr-> next && i<=index)
        {
            prev = itr;
            itr = itr->next;
            i++;
        }
                         
        if(i-1 == index)
        { 
           prev -> next = tmp; 
           tmp -> next = itr;
        }
        else if(i == index && !itr -> next)
        {
            itr -> next = tmp;
        }
    }  
}
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        Node *itr = Head;
        Node *prev = new Node;
        int i =1;
        if(index == 0 && Head )
        {
            Node *tmp = Head;
            Head = Head -> next;
            delete tmp;
            return;
        }

        if(Head)
        {
        while(itr->next && i<=index)
        {
            prev = itr;
            itr = itr -> next;
            i++;
        }
        if(i-1 == index)
        {
            prev -> next = itr -> next;
            delete itr;
        }
  
        }

    }
};

