#include "queue.h"

 void CreateQueue(queue*pq){
	pq->front=0;
	pq->rear=-1;
	pq->size=0;
}
 void Enqueue(QueueEntry e,queue* pq){
  if(pq->rear ==MAXQUEUE-1)
	  pq->rear=0;
  else
	  pq->rear ++;
   pq->entry[pq->rear]=e;
   pq->size++;

}
 void Dequeue(QueueEntry* pe,queue* pq){
	*pe=pq->entry[pq->front];
    pq->front=(pq->front+1)%MAXQUEUE;
      pq->size --;
}
 int QueueEmpty(queue* pq){
		 return !pq->size;
 }
 int QueueFull(queue* pq){
		 return (pq->size == MAXQUEUE);
 }
 void QueueTop(QueueEntry* pe,queue* pq){
	*pe=pq->entry[pq->front];  
  } 
 int QueueSize(queue* pq){
	 return pq->size;
 } 
 void ClearQueue(queue* pq){
	pq->front=0;
	pq->rear=-1;
	pq->size=0;
 } 
 void TraverseQueue(queue* pq,void(*pf)(QueueEntry)){
	 int pos , s;
	  for(pos=pq->front,s=0;s<pq->size;s++){
		  (*pf)(pq->entry[pos]);
	  pos=(pos+1)%MAXQUEUE;
	  }
  }