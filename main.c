#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "food.h"

int main(int argc , char **argv) {
  int a;
  printf("List of order number\n 1. Ramen 100 Baht\n 2. Somtum 20 Baht\n 3. Fried Chicken 50 Baht\n");
 

// For struct Queue
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,cash,change,no=0;

 for(i=1;i<argc;i++){
    if(strcmp(argv[i],"x")==0){
        x=dequeue_struct(&q);
        if(x!=0)
        {
            printf(": Cash : ");
            scanf("%d",&cash);
            while(cash<x)
            {
                printf("Cash : ");
                scanf("%d", &cash);
            }
            if(cash==x)
            {
                printf("Thank you\n");
            }
            else
            {
                change = cash-x;
                printf("Change is: %d\n", change);
            }
        }
    }
    else {
       enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));  
       i++;
    }
 }
 printf("=================================================\n");
    if(q.size!=0)
    {
        printf("There are %d ppl left in the queue\n", q.size);
    }
  return 0;
}