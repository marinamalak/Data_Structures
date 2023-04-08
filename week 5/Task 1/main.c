 #include <stdio.h>
 #include"stack.h"
 #include"queue.h"
  void Display(StackEntry e){
	 printf("element : %c\n",e);
 }
 void Stack(void){
	    StackEntry e;
	stack s;
    int size,choice=1;
	   CreateStack(&s);
	   printf("\t\t*To push new element choose..1\n");
       printf("\t\t*To pop element choose..2\n");	   
       printf("\t\t*To get top element in stack choose..3\n");
       printf("\t\t*To get size of stack choose..4\n");
	   printf("\t\t*To clear stack choose..5\n");
	   printf("\t\t*To display elements of stack choose..6\n");
	   printf("\t\t*To Logout choose..7\n");

	   while(choice){
    printf("\n your choice: ");
	scanf("%d",&choice); 
	switch(choice){
		  case 1:
         if(!StackFull(&s)){
		 printf("Enter the element:");
			 scanf(" %c",&e);
			 Push(e,&s);
			 printf("Element added successfully \n");
		 }
		 else
			 printf("The stack is overflow \n");
        break;
          case 2:
         if(!StackEmpty(&s)){
			 Pop(&e,&s);
			  printf("Element deleted successfully \n");
		 }
		 else
			 printf("The stack is underflow \n");
        break;
          case 3:
            if(!StackEmpty(&s)){
			StackTop(&e,&s);
			printf("The top element : %c \n",e);
			} else
			 printf("The stack is empty \n");	
		break;
          case 4:
		      size= StackSize(&s);
			  printf("The size of stack : %d\n",size);
		  break;
		  case 5:
		      ClearStasck(&s);
			  printf("The stack is clear \n");
		  break;	
		  case 6:
		     if(!StackEmpty(&s))
			 TraverseStack(&s,&Display);
		  else
			 printf("The stack is empty \n");
		  break;	
		  case 7:
		      choice=0;
		  break;
		  default:
			printf(" Wrong Choice\n");
			break;
		}		  
    }
 }
 

 void Display1(QueueEntry e){
	 printf("element : %c\n",e);
 }
 
 void Queue(void){
	    QueueEntry e;
	queue q;
    int size,choice=1;
	    CreateQueue(&q);
	   printf("\t\t*To enqueue new element choose..1\n");
       printf("\t\t*To dequeue element choose..2\n");	   
       printf("\t\t*To get top element in queue choose..3\n");
       printf("\t\t*To get size of queue choose..4\n");
	   printf("\t\t*To clear queue choose..5\n");
	   printf("\t\t*To display elements of queue choose..6\n");
	   printf("\t\t*To Logout choose..7\n");

	   while(choice){
    printf("\n your choice: ");
	scanf("%d",&choice); 
	switch(choice){
		  case 1:
         if(!QueueFull(&q)){
		 printf("Enter the element:");
			 scanf(" %c",&e);
			 Enqueue(e,&q);
			 printf("Element added successfully \n");
		 }
		 else
			 printf("The queue is overflow \n");
        break;
          case 2:
         if(!QueueEmpty(&q)){
			 Dequeue(&e,&q);
			  printf("Element deleted successfully \n");
		 }
		 else
			 printf("The queue is underflow \n");
        break;
          case 3:
            if(!QueueEmpty(&q)){
			QueueTop(&e,&q);
			printf("The top element : %c \n",e);
			} else
			 printf("The queue is empty \n");	
		break;
          case 4:
		      size= QueueSize(&q);
			  printf("The size of queue : %d\n",size);
		  break;
		  case 5:
		      ClearQueue(&q);
			  printf("The queue is clear \n");
		  break;	
		  case 6:
		     if(!QueueEmpty(&q))
			 TraverseQueue(&q,&Display1);
		  else
			 printf("The queue is empty \n");
		  break;	
		  case 7:
		      choice=0;
		  break;
		  default:
			printf(" Wrong Choice\n");
			break;
		}		  
    }
 }

 void main(void){
	int choice;
	printf("To stack choose..1\n");
	printf("To queue choose..2\n");

    printf("\n your choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		  Stack();
		  break;
	case 2 :
          Queue();
	      break	;	
    default:
		printf(" Wrong Choice\n");
		break;		  
	}		  
  }
  