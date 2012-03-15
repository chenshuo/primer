/*
 * This file contains code from "C++ Primer, Fourth Edition", by Stanley B.
 * Lippman, Jose Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2005 by Objectwrite, Inc., Jose Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Contracts Department
 * 	75 Arlington Street, Suite 300
 * 	Boston, MA 02216
 * 	Fax: (617) 848-7047
*/ 

#include "Queue.h"
#include <stdexcept>
using std::out_of_range;
#include <iostream>
using std::ostream; 

template <class Type>
void Queue<Type>::copy_elems(const Queue &orig)
{
    // copy elements from orig into this Queue
    // loop stops when pt == 0, which happens when we reach orig.tail
    for (QueueItem<Type> *pt = orig.head; pt; pt = pt->next)
        push(pt->item);  // copy the element
}

template <class Type>
Queue<Type>& Queue<Type>::operator=(const Queue &rhs)
{
    if (this != &rhs) {
        // destroy elements on this Queue
        destroy();
        copy_elems(rhs);    // copy from rhs into left-hand Queue
    }
    return *this;
}

template <class Type> void Queue<Type>::destroy()
{
    while (!empty())
        pop();
}


template <class Type> void Queue<Type>::push(const Type &val)
{
    // allocate a new QueueItem object
    QueueItem<Type> *pt = new QueueItem<Type>(val);

    // put item onto existing queue
    if (empty())
        head = tail = pt;   // the queue now has only one element
    else {
        tail->next = pt;    // add new element to end of the queue
        tail = pt;
    }
}


template <class Type> void Queue<Type>::pop()
{
    // pop is unchecked: Popping off an empty Queue is undefined 
    QueueItem<Type>* p = head;  // keep pointer to head so we can delete it
    head = head->next;          // head now points to next element
    delete p;                   // delete old head element
}

template <class Type>
ostream& operator<<(ostream &os, const Queue<Type> &q)
{
    os << "< ";
    QueueItem<Type> *p;
    for (p = q.head; p; p = p->next)
            os << p->item << " ";
    os <<">";
    return os;
}

template <class T> template <class Iter>
void Queue<T>::assign(Iter beg, Iter end)
{
    destroy();            // remove existing elements in this Queue

    copy_elems(beg, end); // copy elements from the input range 
}

template <class Type> template <class It>
void Queue<Type>::copy_elems(It beg, It end)
{
    while (beg != end) {
       push(*beg);  
       ++beg;
    }
}

