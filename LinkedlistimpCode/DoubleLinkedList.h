//
//  DoubleLinkedList.h
//  DoubleLinkedListImpl
//
//  Created by Sumanth Sai on 9/30/16.
//  Copyright © 2016 Sumanth Sai. All rights reserved.
//

#ifndef DoubleLinkedList_h
#define DoubleLinkedList_h
using namespace std;
class Node{
    
public:
    int data;
    Node* prev_link;
    Node* next_link;
public:
    Node(){
        data =0;
        prev_link = NULL;
        next_link = NULL;
    }
};

class DoubleLinkedList{
public:
    Node* start = NULL;
    Node* spm = NULL;
    void append(Node* *headref,int item);
    void printlist(Node* node);
    void reverse(Node** head_ref);
    Node* List(Node* head);
    void teamoffoursort(Node* head);
    void shuffle(Node* p);
    void merge(Node* a,Node* b);
    Node* sort(Node* head);
    Node* mergeaftersort(Node* first,Node* second);
    Node* split(Node* head);
};

#endif /* DoubleLinkedList_h */
