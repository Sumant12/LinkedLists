//
//  main.cpp
//  Linkedlistimp
//
//  Created by Sumanth Sai on 9/20/16.
//  Copyright © 2016 Sumanth Sai. All rights reserved.
//

#include <iostream>
#include "SingleLinkedList.h"
#include "DoubleLinkedList.h"
#include <cstdlib>
using namespace std;

int main() {
    LinkedList l1,l3,l2 ;
    for(int i=1;i<=100;i=i+1){
        l1.append(i);
        
        
    }
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"Execution of S1 for Single Linked list:"<<endl;
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    //Team Of Four Exceution
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Team Of Four Operation  ****"<<endl;
    cout<<"\n";
    l1.print(l1.start);
    l1.teamoffoursort(l1.start);
    cout<<"\n";
    cout<<"**** After Team Of Four Operation ****"<<endl;
    cout<<"\n";
    l1.print(l1.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    //Reversing the list
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Reverse Operation  ****"<<endl;
    cout<<"\n";
    l1.print(l1.start);
    l1.start=l1.reverse(l1.start);
    cout<<"\n";
    cout<<"**** After Reverse Operation  ****s"<<endl;
    cout<<"\n";
    l1.print(l1.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    
    cout<<"\n";
    
    for(int i=1;i<=100;i=i+1){
        l2.append(i);
        
        
    }
    //Shuffle Two lists
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout << "**** Before shuffling opearion ****\n";
    
    cout<<"\n";

   
    l1.shuffle(l2.start);
    cout << "**** After shuffling opearion ****\n";

    l1.print(l2.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    

    
    
    for(int i=1;i<=100;i=i+1){
        l3. append(rand());
        
        
    }
    
    cout << "-----------------------------------------------------" << endl;
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"Execution of S2 for Single Linked list:"<<endl;
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
  
    
    //Team Of Four Exceution
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Team Of Four Operation  ****"<<endl;
    cout<<"\n";
    l3.print(l3.start);
    l3.teamoffoursort(l3.start);
    cout<<"\n";
cout<<"**** After Team Of Four Operation ****"<<endl;
    cout<<"\n";
    l3.print(l3.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    
    //Reversing the list
    cout << "---------------------------------" << endl;
    cout<<"\n";
   cout<<"**** Before Reverse Operation  ****"<<endl;
    cout<<"\n";
    l3.print(l3.start);
    l3.start=l3.reverse(l3.start);
    cout<<"\n";
       cout<<"**** After Reverse Operation  ****s"<<endl;
    cout<<"\n";
    l3.print(l3.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    
    cout<<"\n";
    //Shuffle Two lists
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout << "**** Before shuffling opearion ****\n";
    cout<<"\n";
    l3.shuffle(l3.start);
     cout << "**** After shuffling opearion ****\n";
    l3.print(l3.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;

    
    DoubleLinkedList List1,List3,List2;
    for(int i=1;i<=100;i=i+1){
        
        List1. append(&List1.start,i);
        
    }
    
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"Execution of S1 for Double Linked list:"<<endl;
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    //Team Of Four Exceution
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Team Of Four Operation  ****"<<endl;
    cout<<"\n";
    List1.printlist(List1.start);
    List1.teamoffoursort(List1.start);
    cout<<"\n";
    cout<<"**** After Team Of Four Operation ****"<<endl;
    cout<<"\n";
    List1.printlist(List1.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    
    
    
    //Reversing the list
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Reverse Operation  ****"<<endl;
    cout<<"\n";
    List1.printlist(List1.start);
    List1.reverse(&List1.start);
    cout<<"\n";
    cout<<"**** After Reverse Operation  ****"<<endl;
    cout<<"\n";
    List1.printlist(List1.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    
    cout<<"\n";
    
    for(int i=1;i<=100;i=i+1){
        
        List2.append(&List2.start,i);
    }
    
    //Shuffling a List
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout << "**** Before shuffling opearion ****";
    cout<<"\n";
    
    
    List2.shuffle(List2.start);
    cout<<"\n";
    cout << "**** After shuffling opearion ****";
    cout<<"\n";
    List2.printlist(List2.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    
    
    int v1;
    for(int i=1;i<=100;i=i+1){
        v1 = rand();
        List3. append(&List3.start,v1);
        
        
    }
    
    cout<<"\n";
    cout << "-----------------------------------------------------" << endl;
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"Execution of S2 for Double Linked list:"<<endl;
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    //Team Of Four Exceution
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Team Of Four Operation  ****"<<endl;
    cout<<"\n";
    List3.printlist(List3.start);
    List3.teamoffoursort(List3.start);
    cout<<"\n";
    cout<<"**** After Team Of Four Operation ****"<<endl;
    cout<<"\n";
    List3.printlist(List3.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    
    
    
    //Reversing the list
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout<<"**** Before Reverse Operation  **** "<<endl;
    cout<<"\n";
    List3.printlist(List3.start);
    List3.reverse(&List3.start);
    cout<<"\n";
    cout<<"**** After Reverse Operation  **** "<<endl;
    cout<<"\n";
    List3.printlist(List3.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    
    //Shuffling a list
    cout<<"\n";
    cout << "---------------------------------" << endl;
    cout<<"\n";
    cout << "**** Before shuffling opearion ****"<<endl;
    cout<<"\n";
    
    
    List3.shuffle(List3.start);
    cout<<"\n";
    cout << "**** After shuffling opearion ****\n";
    List3.printlist(List3.start);
    cout<<"\n";
    cout << "---------------------------------" << endl;
    
    
        return 0;
}
