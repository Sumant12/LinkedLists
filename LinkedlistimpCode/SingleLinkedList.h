//
//  SingleLinkedList.h
//  DoubleLinkedListImpl
//
//  Created by Sumanth Sai on 9/30/16.
//  Copyright © 2016 Sumanth Sai. All rights reserved.
//

#ifndef SingleLinkedList_h
#define SingleLinkedList_h

class SingleNode{
    
public:
    int data;
    SingleNode* link;
public:
    SingleNode(){
        data =0;
        link = NULL;
        
    }
    
};

class LinkedList{
    
public:
    SingleNode* start= NULL;
    SingleNode* tvs = NULL;
    SingleNode* str = NULL;
    SingleNode* spm = NULL;
    void append(int i);
    void print(SingleNode* head);
    SingleNode* reverse(SingleNode* head);
    void split(SingleNode* head,SingleNode** front,SingleNode** back);
    SingleNode* MergeAfterSort(SingleNode* a,SingleNode* b);
    void sort1(SingleNode** headref);
    void printlist(SingleNode* SingleNode);
    void teamoffoursort(SingleNode* headref);
    void merge(SingleNode* a,SingleNode* b);
    void shuffle(SingleNode* p);
};


#endif /* SingleLinkedList_h */
