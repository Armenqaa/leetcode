struct Node {
    int value;
    Node *next;
};

class MyLinkedList {
public:
    int size;
    Node *head;
    Node *tail;
    MyLinkedList() {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    
    int get(int index) {
        if (index < size) {
            Node *curr = head;
            
            for (int i = 0; i < index; ++i) {
                curr = curr -> next;
            }
            
            return curr -> value;
            
        } 
        
        return -1;
        
    }
    
    void addAtHead(int val) {
        Node *new_head = new Node;
        new_head -> value = val;
        new_head -> next = head;
        if (head == NULL && tail == NULL) {
            tail = new_head;
        } else if (tail == NULL) {
            tail = head;
            tail -> next = NULL;
        } 
        head = new_head;
        size++;
    }
    
    void addAtTail(int val) {
        Node *new_tail = new Node;
        new_tail -> value = val;
        new_tail -> next = NULL;
        if (head == NULL) {
            head = new_tail;
            tail = new_tail;
        } else {
            tail -> next = new_tail;
            tail = tail -> next;
        }
        size++;
    }
    
   void addAtIndex(int index, int val) {
        if (index <= size) {
            if (index == 0) {
                addAtHead(val);
            } else if (size == 1 || index == size) {
                addAtTail(val);
            } else {
                Node *add = new Node;
                add -> value = val;
                Node *curr = head;
                for (int i = 0; i < index - 1; ++i) {
                    curr = curr -> next;
                }
                Node *curr_next = curr -> next;
                curr -> next = add;
                add -> next = curr_next;
                size++;
            }
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < size) {
            Node *curr = head;
            if (head -> next != NULL) { 
                if (index == 0) {
                    head = curr -> next;
                } else {
                    for (int i = 0; i < index - 1; ++i) {
                        curr = curr -> next;
                    }

                    Node *curr_next = new Node;
                    curr_next = curr -> next;
                    curr -> next = curr_next -> next;
                    if (index == size - 1) {
                        tail = curr;
                    }
                }
            } else {
                head = NULL;
                tail = NULL;
            }
            size--;
        }
    }
};
