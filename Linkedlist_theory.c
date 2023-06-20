The linked list is a linear data structure that stores multiple data of the same type.

 Linked list works as blocks each block stores the element and address of the next element 
 the last block store its element and a null value indicates that it is the last element and the first block stores 
 its element and the next element address of the next element.

Each block carries two elements of memory in general linked list

let's take int type it is 4 bytes long so so if we have to store 3 elements total block is 8 bytes long so 3*8 24 bytes..

there are 4 types of linked lists 

1. singularly linked list

2. doubly linked list

3. circular linked list

4. doubly circular linked list.

1. Singularly linked list

The above definition carries to a single linked list

//Node of a singularly linked list

 struct Node {

    int data;

    struct Node *next;

};

2. Doubly linked list : 

A doubly linked list (DLL) is a special type of linked list in which each 
node contains a pointer to the previous node as well as the next node of the linked list.

// Node of a doubly linked list

 

struct Node {

    int data;

   

    // Pointer to next node in DLL

    struct Node* next;

   

    // Pointer to the previous node in DLL

    struct Node* prev;

};

3. Circular linked list

The circular linked list is a linked list where all nodes are connected to form a circle.
In a circular linked list, the first node and the last node are connected to each other which forms a circle. There is no NULL at the end.

The same node of a singularly linked list will carry for circular linked list

struct Node {

    int data;

    struct Node *next;

};

4. Doubly circular linked list

A circular doubly linked list is defined as a circular linked list in which each node has two 
links connecting it to the previous node and the next node.

A circular doubly linked list has the following properties:

Circular: A circular doubly linked list’s main feature is that it is circular in design.

Doubly Linked: Each node in a circular doubly linked list has two pointers – 
one pointing to the node before it and the other pointing to the node after it.

Header Node: At the start of circular doubly linked lists, a header node or sentinel node is frequently used. 
This node is used to make the execution of certain operations on the list simpler even though it is not a component of the list’s actual contents. 
