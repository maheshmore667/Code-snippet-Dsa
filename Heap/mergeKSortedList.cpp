/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
#include<queue>
class compare{
    public: 
    bool operator()(Node<int>* a, Node<int>* b){
        return a->data > b-> data;
    }
};

Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{   
    int n = listArray.size();
    priority_queue<Node<int>*, vector<Node<int>*>, compare> mini;
    for(int i=0; i<n; i++ ) {
        if(listArray[i]!= NULL) {
            mini.push(listArray[i]);
        }
        
    }
     Node<int>* Head = NULL;
     Node<int>* Tail = NULL;

    while(!mini.empty()) {
        Node<int>* top = mini.top();
        mini.pop();
        if(top -> next  != NULL) {
            mini.push(top -> next);
        }
        if(Head == NULL){
            Head = top;
            Tail = top;
        } else {
            Tail -> next = top;
            Tail = top;
        }
        

    }
    return Head;
}
