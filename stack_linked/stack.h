 #ifndef STACH_H
 #define STACH_H
 #include <stdio.h>
 #define StackEntry char
 #define MAXSTACK 100
 
 
 typedef struct stacknode{
	StackEntry entry;
    struct stacknode* next;	
 }stacknode;
 
 typedef struct stack{
	 stacknode* top;
	 int size;
 }stack;
 
  void CreateStack(stack*);
  int StackEmpty(stack*);
  int StackFull(stack*);
  void Push(StackEntry,stack*);
  void Pop(StackEntry*,stack*);
  void StackTop(StackEntry*,stack*);
  int StackSize(stack*);
  void ClearStasck(stack*);
  void TraverseStack(stack*,void(*)(StackEntry));

#endif