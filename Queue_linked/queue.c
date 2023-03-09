#include "queue.h"
#include <stdlib.h>

 void CreateQueue(queue*pq){
	pq->front=NULL;
	pq->rear=NULL;
	pq->size=0;
}
 void Enqueue(QueueEntry e,queue* pq){
   queuenode* pn =(queuenode*)malloc(sizeof(queuenode));
   pn->next=NULL;
   pn->entry=e;
   if(!pq->rear)
	   pq->front=pn;
   else
	   pq->rear->next=pn;
   pq->rear=pn;
   pq->size++;

}
 void Dequeue(QueueEntry* pe,queue* pq){
	queuenode* pn =pq->front;
	*pe=pn->entry;
	pq->front=pn->next;
	free(pn);
	if(!pq->front)
		pq->rear=NULL;
    pq->size --;
}
 int QueueEmpty(queue* pq){
		 return !pq->front;
 }
 int QueueFull(queue* pq){
		 return 0;
 }
 void QueueTop(QueueEntry* pe,queue* pq){
	*pe=pq->front->entry;  
  } 
 int QueueSize(queue* pq){
	 return pq->size;
 } 
 void ClearQueue(queue* pq){
	while(pq->front){
		pq->rear=pq->front->next;
		free(pq->front);
		pq->front=pq->rear;
	}
	pq->size=0;
 } 
 void TraverseQueue(queue* pq,void(*pf)(QueueEntry)){
	  for(queuenode* pn=pq->front;pn;pn=pn->next)
		  (*pf)(pn->entry);
  }