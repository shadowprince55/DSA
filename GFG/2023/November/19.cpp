// https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here
        Node* dummy = Node(-1);
        Node* ans = dummy;
        Node* t1 = head1;
        Node* t2 = head2;
        
        while(t1 && t2){
            if(t1->data==t2->data){
                ans->next = new Node(t1->data);
                ans = ans->next;
                t1 = t1->next;
                t2 = t2->next;
            }
            else if(t1->data > t2->data){
                t2 = t2->next;
            }
            else if(t1->data < t2->data){
                t1 = t1->next;
            }
        }
        return dummy->next;
    }
};
