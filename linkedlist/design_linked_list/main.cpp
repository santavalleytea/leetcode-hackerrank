class MyLinkedList {
public:
    ListNode* head;
    MyLinkedList() {
        head = nullptr;
    }

// Get the node at specified index
    int get(int index) {
        ListNode* current = head;
        int count = 0;
        while (current != nullptr) {
            if (count == index) {
                return current->val;
            }
            current = current->next;
            // Increment to keep count of index
            count++;
        }

        return -1;
    }

    // Add new node at head
    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    // Add new node at tail
    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        // If head null, then tail is also the head
        if (head == nullptr) {
            head = newNode;
            return;
        }

        // Find the last node pointing to null
        ListNode* current = head;
        while(current->next != nullptr) {
            current = current->next;
        }

        // Add new node that is pointed to by last existing node
        current->next = newNode; 
    }

    // Add at specified index
    void addAtIndex(int index, int val) {
        // Add at head
        if (index == 0) {
            addAtHead(val);
            return;
        }

        // Iterate to find specified index
        ListNode* current = head;
        for (int i = 0; i < index - 1; ++i) {
            if (current == nullptr) {
                return;
            }

            current = current->next;
        }

        if (current == nullptr) {
            return;
        }
        ListNode* newNode = new ListNode(val);
        // newNode points at the node next to initial current node
        newNode->next = current->next;
        // The current now points to newNode
        current->next = newNode;
    }

    // Delete at specified index
    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) {
            return;
        }

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        } 

        ListNode* current = head;
        // Find index
        for (int i = 0; i < index - 1; ++i) {
            if (current == nullptr || current->next == nullptr) {
                return;
            } 
            
            current = current->next;
        }
    
        if (current->next == nullptr) {
            return;
        }
        // Create temp to store current->next
        ListNode* temp = current->next;
        // Adjust current to point at the one after next
        current->next = current->next->next;
        // Delete the stored node
        delete temp;
    }
};
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
