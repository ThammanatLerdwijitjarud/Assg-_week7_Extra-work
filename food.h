typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
    int no=0;
    if(x>3 || x<1)
    {
        printf("No food\n");
    }
    else
    {
        Node *new_node=(Node*) malloc(sizeof(Node));
        if(new_node!=NULL){
            new_node->menu=x;
            new_node->num=y;
            new_node->nextPtr=NULL;
            if(q->size==0)
            {
                q->headPtr=new_node;
            }
             else
            {
                q->tailPtr->nextPtr=new_node;
            }
            q->tailPtr=new_node;
            q->size++;
            no++;
        printf("My order is %d\n", x);
        /*Finish enqueue */
        }
    }
  
}


int dequeue_struct(Queue *q){
    int no=1;
   
   NodePtr t=q->headPtr;
   if(t!=NULL){
    printf("Cutomer no: %d\n",no);
    int x= t->menu;
    int y = t-> num;
    int cash;

    if(x==1)
    {
        printf("Ramen\n");
        cash = 100*y;
        printf("You have to pay %d\n", cash);
    }
    else if(x==2)
    {
        printf("Somtom\n");
        cash = 20*y;
        printf("You have to pay %d\n", cash);
    }
    else if(x==3)
    {
        printf("Fried chicken\n");
        cash = 50*y;
        printf("You have to pay %d\n", cash);
    }

    q->headPtr=t->nextPtr;
    if(q->size==1)
    {
        q->tailPtr==NULL;
    }
    q->size--;
    no++;
    free(t);
        /*Finish dequeue */
    return cash;
   }
   else printf("the queue is empty\n");
   return 0;
}

