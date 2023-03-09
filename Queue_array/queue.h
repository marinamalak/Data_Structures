 #ifndef QUEUE_H
 #define QUEUE_H
 #include <stdio.h>
 #define QueueEntry char
 #define MAXQUEUE 100
 
 
 typedef struct queue{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
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