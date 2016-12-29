//
//  SingleLinkedList.cpp
//  DoubleLinkedListImpl
//
//  Created by Sumanth Sai on 9/30/16.
//  Copyright © 2016 Sumanth Sai. All rights reserved.
//

#include <iostream>
#include "SingleLinkedList.h"
using namespace std;

//This Method appends data to the list
void LinkedList::append(int item){
    
    str = new SingleNode();
    str->data=item;
    
    if(start == NULL){
        start = str;
        str->link = NULL;
        tvs = str;
    }
    
    else{
        while(tvs->link != NULL){
            tvs = tvs->link;
        }
        
        tvs->link = str;
        str->link = NULL;
    }
    
}

//This Method prints the list
void LinkedList::print(SingleNode* head){
    
    SingleNode* trav = head;
    int counter =0;
    while(trav!=NULL){
        if(counter%4 == 0){
            cout<<"\n";
            
        }
        counter++;
        
        cout<<trav->data<<" ";
        trav=trav->link;
        
    }
    cout << endl;
}



//This Method reverse the list
SingleNode* LinkedList::reverse(SingleNode* head){
    
    SingleNode* prev=NULL;
    SingleNode* current= head;
    SingleNode* next =NULL;
    
    while(current !=NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current= next;
        
        
    }
    start = prev;
    
    return start;
}

void LinkedList::printlist(SingleNode* SingleNode){
    int counter =0;
    while(SingleNode!= NULL){
        if(counter%4 ==0){
            cout<<"\n";
        }
        counter++;
        
        std::cout<<SingleNode->data<<" ";
        SingleNode=SingleNode->link;
    }
    std::cout << std::endl;
}


//This Method Splits the list to two lists
void LinkedList::split(SingleNode* head,SingleNode* *front,SingleNode* *back){
    
    SingleNode* fast;
    SingleNode* slow;
    if(head == NULL || head->link == NULL){
        *front = head;
        *back = NULL;
    }
    else{
        slow = head;
        fast = head->link;
        
        while(fast !=NULL){
            fast=fast->link;
            if(fast != NULL){
                slow = slow->link;
                fast= fast->link;
            }
        }
        
        *front = head;
        
        *back= slow->link;
        slow->link = NULL;
        
    }
}

//This Method merges two lists after sorting
SingleNode* LinkedList::MergeAfterSort(SingleNode* a,SingleNode* b){
    SingleNode* result = NULL;
    
    if(a == NULL){
        return b;
    }
    else if(b == NULL){
        return a;
    }
    
    if(a->data <= b->data){
        result = a;
        result->link = MergeAfterSort(a->link, b);
    }
    else{
        result = b;
        result->link = MergeAfterSort(a, b->link);
    }
    return result;
}



//This Method sort the list
void LinkedList::sort1(SingleNode* *headref){
    SingleNode* head = *headref;
    SingleNode* a = NULL;
    SingleNode* b = NULL;
    
    //cout<<head->data<<endl;
    if((head == NULL) || (head->link == NULL)){
        return;
    }
    
    split(head, &a, &b);
    sort1(&a);
    sort1(&b);
    
    *headref = MergeAfterSort(a,b);
    
}


//This Method merges two lists
void LinkedList::merge(SingleNode* a,SingleNode* b){
    
    if(a == NULL|| b== NULL ){
        return;
    }
    
    
    while(a->link != NULL){
        a= a->link;
    }
    a->link =b;
    
}

//This Method executes the first problem statement(Team of four)
void LinkedList::teamoffoursort(SingleNode* head){
    
    SingleNode* fast;
    SingleNode* slow;
    SingleNode* slow2;
    int count=0;
    if(head == NULL){
        return;
    }
    
    slow = head;
    fast = head->link;
    if(fast == NULL){
        merge(spm,slow);
        return;
    }
    
    
    while(fast->link !=NULL && count <2){
        count +=1;
        fast=fast->link;
        
        if(fast->link != NULL){
            count +=1;
            fast= fast->link;
        }
    }
    
    if(fast != NULL){
        slow2 = fast->link;
    }
    if(fast != NULL){
        fast->link = NULL;
    }
    sort1(&slow);
    
    if((spm == NULL) || (spm->link == NULL)){
        spm = slow;
        start = slow;
    }
    else{
        merge(spm, slow);
    }
    
    
    slow = slow2;
    teamoffoursort(slow);
    
}

//This Method splits the list into half and shuffles them
void LinkedList::shuffle(SingleNode* r){
    SingleNode* p = NULL;
    SingleNode* q = NULL;
    
    split(r, &p, &q);
    cout<<"** first half **" << endl;
    printlist(p);
    cout <<"\n";
    cout <<"** second half **"<< endl;
    
    printlist(q);
    cout <<"\n";
    
    SingleNode* p_c=p, *q_c=q;
    SingleNode* p_n,*q_n;
    
    while(p_c != NULL && q_c != NULL){
        
        p_n = p_c->link;
        q_n = q_c->link;
        
        
        q_c->link = p_n;
        p_c->link = q_c;
        
        p_c =p_n;
        q_c = q_n;
        
    }
    
    
    q = q_c;
    
}

