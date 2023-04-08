#include "Global.h"

#define QUEUE_ARRAY
 #include <stdio.h>
 #define QueueEntry char
 
#ifdef QUEUE_ARRAY
 typedef struct queue{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
 }queue;
 
#else
 typedef struct queuenode{
 QueueEntry entry;
 struct queuenode* next;
 }queuenode;
 
typedef struct queue{
	queuenode* front;
	queuenode* rear;
	int size;
}queue;

#endif
  void CreateQueue(queue*);
  int QueueEmpty(queue*);
  int QueueFull(queue*);
  void Enqueue(QueueEntry,queue*);
  void Dequeue(QueueEntry*,queue*);
  void QueueTop(QueueEntry*,queue*);
  int QueueSize(queue*);
  void ClearQueue(queue*);
  void TraverseQueue(queue*,void(*)(QueueEntry));