#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next; //Pointer to next node

    //Runs when a new object is initialized
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
int main(){
    Node* node1 = new Node(2);
    // -> is syntax to access
    // members when using pointer
    cout<<node1 -> data <<endl;   
    cout<<node1 -> next <<endl;    
    return 0;
}