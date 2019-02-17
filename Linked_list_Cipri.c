#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node_t   
{
    int data;
    struct node_t* next;
} node_t;

void print_list(node_t *ptr)
{
    node_t *current = ptr;
    
    while(current != NULL)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
}

node_t *add_data(node_t* ptr, int new_data)
{
//    node_t* head;
    node_t* head = ptr;
    
    if(ptr == NULL)
    {
        head = (node_t*)malloc(sizeof(node_t));
        head->data = new_data;
        head->next = NULL;
    } else
    {
        //vreau sa ajung la ultimul nod ca sa pot sa adaug un nou nod
        while(head->next != NULL)
        {
            head = head->next;
        }
        //aloc memorie pt noul nod si-l creez
        head->next = (node_t*)malloc(sizeof(node_t));
        head->next->data = new_data;
        head->next->next = NULL;
        
        head = ptr;
    }
    
    return head;
}

void add_data_after_node(node_t *ptr, int new_data, int position)
{
    node_t *new_node, *first, *prev;
    node_t *head = (ptr);
    int check_position = 0, flag = 0;
    first = head;  //
    
    while(head->next != NULL)   //parcurge lista, si head e elementul curent, iar head->next elem urmator pe care-l verificam sa nu fie null
    {
        if(check_position == position)
        {
            new_node = (node_t*)malloc(sizeof(node_t));
            new_node->data = new_data;
            prev->next = new_node;
            new_node->next = head;
            ptr = first;
        }
        prev = head;
        head = head->next;
        check_position++;
    }
    if(check_position < position)
        head = add_data(head, new_data);
}

void  push(node_t **head, int new_data)
{
	node_t *new_node = (node_t*)malloc(sizeof(node_t));
	new_node->data = new_data;
	new_node->next = *head;  	 //  Make next of new node as head 
	*head = new_node;	 		//move the head to point to the new node 
}



int first_attempt()
{
   node_t *head  = NULL, *first_head = NULL; //	create local var
   
    head = add_data(head, 0); 
    first_head = head;
    head = add_data(head, 1); 		
    head = add_data(head, 2); 
    head = add_data(head, 3); 	
    head = add_data(head, 4);   // pasare prin valoarea pointerului , deci fct imi va returna ceva si eu il salvez in head
	
   print_list(first_head);
   printf("\n");
   
   add_data_after_node(head, 100, 2);
   
    
    return 0;
}