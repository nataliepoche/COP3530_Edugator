/*
    Interquartile Range

    Given a sorted singly linked list without a tail (e.g, head -> 1 -> 2 -> 3 -> 4),
    return the interquartile range of the data set using the slow and fast pointer
    approach OR using a methodology that does not iterate over the linked list
    twice. You must not iterate over the entire linked list more than once and you
    cannot use arrays, vectors, lists or an STL implementation of List ADT in this problem.

    Sample Input:
        2 4 4 5 6 7 8

    Sample Output:
        3.00
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Node {
public:
    int value;
    Node* next = nullptr;
};

Node* insertEnd(Node* head, int key)
{
    Node* temp = new Node();
    temp->value = key;
    if(head == nullptr)
        head = temp;
    else
    {
        Node* curr = head;
        while(curr->next != nullptr)
            curr = curr->next;
        curr->next = temp;
    }
    return head;
}

float interQuartile(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    Node* q1 = head;
    Node* q3 = head;
    Node* prev_q1 = nullptr;
    bool moveSlow = false;

    int count = 0;
    while(fast->next && fast->next->next){
        if(count % 2 == 0 && count != 0){
            fast = fast->next->next;
            slow = slow->next;

            prev_q1 = q1;
            q1 = q1->next;
            q3 = q3->next->next->next;
        }
        else{
            fast = fast->next->next;
            slow = slow->next;
        }
        //cout << q1->value << endl;
        count++;
    }

    float q1_val, q3_val;

    if(fast->next != nullptr){
        if(count % 2 != 0){
            q1_val = q1->value;
            q3_val = q3->next->next->value;
        }
        else{
            q1_val = q1->next->value;
            q3_val = q3->next->next->next->next->value;
        }
    }
    else{
        if(count % 2 != 0){
            q1_val = q1->value;
            q3_val = q3->next->next->value;
        }
        else{
            q1_val = (q1->value + q1->next->value) / 2.0;
            q3_val = (q3->next->next->next->value + q3->next->next->next->next->value) / 2.0;
        }
    }

//    cout << q1->value << "," << prev_q1->value << endl;
//    cout << q3->value << endl;
//    cout << q3_val << "-" << q1_val << endl;
//    cout << count <<endl;

    return q3_val - q1_val;
}