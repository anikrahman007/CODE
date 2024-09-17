#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[])
{
    // Memory for numbers;
    node *list = NULL;

    //For each Command-Line argument
    for(int i = 1; i < argc; i++)
    {
        // Convert argument to int
        int number = atoi(argv[i]);
        //printf("%i\n", number);

        //Allocate Node for Number
        node *n = malloc(sizeof(node));

        if(n == NULL)
        {
            //free memory thus fur
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // If list is Empty
        if(list == NULL)
        {
            list = n;
        }

        //If number belongs begining of list
        else if(n->number < list->number)
        {
            n->next = list;
            list = n;

        }

        // if number belongs later in the list
        else
        {   // iterate over nodes in list
            for(node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // if at end of list
                if(ptr->next == NULL)
                {
                    //Append mode
                    ptr->next = n;
                    break;
                }

                // if in middle of list
                if(n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }

            }
        }

        //print the whole list sorted with iterate
            // node *ptr = list;
            // while(ptr != NULL)
            // {
            //     printf("%i\n", ptr->number);
            //     ptr = ptr->next;
            // }

    }
    //Print the whole list sorted
    node *ptr = list;
    while(ptr != NULL)
        {
            printf("%i\n", ptr->number);
            ptr = ptr->next;
        }

}

