/*
    Quiz 3: Image Encryptor

    An image is provided as a linked list of RGB values. 
	Each pixel is represented by a triplet of nodes and 
	stores the corresponding values of the RGB color 
	between 1-256. This image needs to be encrypted by 
	replacing the value of the cell with the next greater
	value in the list. If no element in the list is 
	greater than the current element, encrypt the pixel
	value as 0. Write a function that takes as input the
	head of the linked list and returns a vector of the 
	encrypted image.

    Sample Input:
        6
		3 1 6 4 7 2
    
    Sample Output:
        6 6 7 7 0 0 
*/

#include <iostream>
#include <vector>

struct ListNode
{
    int data;
    ListNode* next;
};

ListNode* addEnd(ListNode* head, int value)
{
    ListNode* newNode = new ListNode;
    newNode -> data = value;
    newNode -> next = nullptr;
    
    if (head == nullptr)
        return newNode;
        
    ListNode* curr = head;
    while(curr -> next != nullptr)
        curr = curr -> next;
        
    curr -> next = newNode; 

    return head;
}


std::vector<int> encryptImage(ListNode* head)
{
   // code here
}