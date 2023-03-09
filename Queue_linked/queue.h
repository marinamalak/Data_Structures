 #ifndef QUEUE_H
 #define QUEUE_H
 #include <stdio.h>
 #define QueueEntry char
 
 
 typedef struct queuenode{
 QueueEntry entry;
 struct queuenode* next;
 }queuenode;
 
typedef struct queue{
	queuenode* front;
	queuenode* rear;
	int size;
}queue;

  void CreateQueue(queue*);
  int QueueEmpty(queue*);
  int QueueFull(queue*);
  void Enqueue(QueueEntry,queue*);
  void Dequeue(QueueEntry*,queue*);
  void QueueTop(QueueEntry*,queue*);
  int QueueSize(queue*);
  void ClearQueue(queue*);
  void TraverseQueue(queue*,void(*)(QueueEntry));

#endif