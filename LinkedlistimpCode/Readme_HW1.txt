Linked list:
It is a linear collection of data elements called ‘nodes’ each pointing to the next node. The elements are not stored at contiguous location and they are linked using pointers. Generally, there are two types of Linked lists, Single linked lists and Double linked lists.

Single Linked list:
Single Linked lists contains nodes which have two fields (Data field and address of the next node field).

 


Double Linked list:
In Double Linked list, apart from the next node address we also have the address of the previous node for every node. It essentially has 3 fields. They are Data field, previous node address field and next node address field.

 


Advantages of Linked lists:
1.	Size is dynamically expanded upon addition of every node.
2.	Nodes can be easily inserted and deleted.

Disadvantages of Linked lists:
1.	Random access is not allowed. 
2.	Extra memory space is required for the pointers. 

My Implementation of three operations:

1.	Team of Four:
I have implemented sorting algorithm first so that it can be used to sort four elements at a time. I used merge sort as that is one of the most efficient sorting algorithm for linked lists.
I have used two pointers (slow and fast pointers). Initially both the pointers are pointing to the head of the list. I moved the fast pointer three times forward and made the pointer of fourth node to null. Now, the chunk of four elements is passed to the sort method. For every iteration, the sorted list is merged with the main list. This step is performed recursively and finally a list in which every four elements are sorted is obtained.
    2.Reversing a list:
I reversed the pointers for every node starting from the head. The same process is applied till the last node is reversed.

    3.Shuffling two lists:
       First I split the list into List1 and List2 respectively. While traversing through the List1, the first node of List1 is connected to the head of first Node of List2 and first node address field of List2 is changed to address field of second node of List. The same process is continued till any of the list becomes empty.



The same logic is applied for both Single Linked lists and Double linked lists.


References:

How merge sort works?
https://www.youtube.com/watch?v=EeQ8pwjQxTM

How Linked Lists work:
https://en.wikipedia.org/wiki/Linked_list
