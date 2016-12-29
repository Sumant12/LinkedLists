//
//  DoubleLinkedList.cpp
//  DoubleLinkedListImpl
//
//  Created by Sumanth Sai on 9/30/16.
//  Copyright © 2016 Sumanth Sai. All rights reserved.
//

#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;



//This Method appends an item which is given as an argument to this function to the Double Lnkedlist
void DoubleLinkedList::append(Node* *headref,int item){
    
    Node* node_ins = new Node();
    Node* last = *headref;
    
    node_ins->data = item;
    
    node_ins->next_link = NULL;
    
    if(*headref == NULL){
        node_ins->prev_link = NULL;
        *headref = node_ins;
        start = * headref;
        return;
        
    }
    while(last->next_link != NULL){
        last = last->next_link;
        
    }
    last->next_link = node_ins;
    node_ins->prev_link = last;
    return;
    
}


//This Method prints the list
void DoubleLinkedList::printlist(Node* node){
    
    int counter =0;
    while(node != NULL){
        if(counter%4 ==0){
            cout<<endl;
        }
        counter++;
        cout<<node->data<<" ";
        node = node->next_link;
    }
    cout<<endl;
    
}


//This Method reverses the list
void DoubleLinkedList::reverse(Node** headref){
    Node* tmp = NULL;
    Node* current = *headref;
    while(current != NULL){
        tmp = current->prev_link;
        current->prev_link = current->next_link;
        current->next_link = tmp;
        current = current->prev_link;
    }
    if(tmp != NULL){
        *headref = tmp->prev_link;
    }
    
}


//This Method shuffles two the elemenst of two lists
void DoubleLinkedList::shuffle(Node* a){
    Node* p = a;
    Node* q= NULL;
    q = split(p);
    cout<<endl;
    cout<<"** first half **"<<endl;
    cout<<endl;
    printlist(p);
    cout<<endl;
    cout<<"** Second half **"<<endl;
    cout<<endl;
    printlist(q);
    Node* p_c = p, *q_c = q;
    Node* p_n, *q_n;
    
    while(p_c != NULL && q_c != NULL){
        
        p_n = p_c->next_link;
        q_n = q_c->next_link    ;
        
        q_c->next_link = p_n;
        p_c->next_link = q_c;
        
        p_c = p_n;
        q_c = q_n;
    }
}


//This Method splits a list into two halves
Node* DoubleLinkedList::split(Node* head){
    
    Node* fast = head;
    Node* slow = head;
    while(fast->next_link && fast->next_link->next_link){
        fast = fast->next_link->next_link;
        slow = slow->next_link;
    }
    Node* tmp = slow->next_link;
    slow->next_link = NULL;
    return tmp;
}


//This method merges two Double linked lists into one after sorting
Node* DoubleLinkedList::mergeaftersort(Node* first,Node* second){
    if(!first){
        return second;
    }
    if(!second){
        return first;
    }
    
    if(first->data<second->data){
        first->next_link = mergeaftersort(first->next_link, second);
        first->next_link->prev_link = first;
        first->prev_link = NULL;
        return first;
    }
    else{
        second->next_link = mergeaftersort(first, second->next_link);
        second->next_link->prev_link = second;
        second->prev_link = NULL;
        return second;
    }
}

//This Method sorts the list
Node* DoubleLinkedList::sort(Node* head){
    if(!head || !head->next_link){
        return head;
    }
    Node* second = split(head);
    head = sort(head);
    second = sort(second);
    
    return mergeaftersort(head, second);
}


//This Method merges two lists
void DoubleLinkedList::merge(Node* a,Node* b){
    if(a==NULL || b==NULL){
        return;
    }
    while(a->next_link != NULL) {
        a= a->next_link;
    }
    a->next_link =b;
    b->prev_link = a;
}

//This Method executes the first problem statement(Team of four)
void DoubleLinkedList::teamoffoursort(Node* head){
    Node* fast;
    Node* slow;
    Node* slow2;
    int count=0;
    if(head == NULL){
        return;
    }
    
    slow = head;
    fast = head->next_link;
    if(fast == NULL){
        merge(spm,slow);
        return;
    }
    
    
    while(fast->next_link !=NULL && count <2){
        count +=1;
        fast=fast->next_link;
        
        if(fast->next_link != NULL){
            count +=1;
            fast= fast->next_link;
        }
    }
    
    if(fast != NULL){
        slow2 = fast->next_link;
    }
    if(fast != NULL){
        fast->next_link = NULL;
    }
    slow = sort(slow);
    
    if((spm == NULL) || (spm->next_link == NULL)){
        spm = slow;
        start = slow;
    }
    else{
        merge(spm, slow);
    }
    
    
    slow = slow2;
    teamoffoursort(slow);
}
