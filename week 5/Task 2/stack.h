 
 
 #ifndef STACH_H
 #define STACH_H
 #include <stdio.h>
 #define StackEntry char
 #define MAXSTACK 100
 
 
 typedef struct stack{
	int top;
    StackEntry entry [MAXSTACK];	
 }stack;
 
  void CreateStack(stack*);
  int StackEmpty(stack*);
  int StackFull(stack*);
  void Push(StackEntry,stack*);
  char Pop(stack*);
  char StackTop(stack*);
  int StackSize(stack*);
  void ClearStasck(stack*);
  void TraverseStack(stack*,void(*)(StackEntry));

#endif