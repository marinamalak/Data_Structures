 
 
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
  void Pop(StackEntry*,stack*);
  void StackTop(StackEntry*,stack*);
  int StackSize(stack*);
  void ClearStasck(stack*);
  void TraverseStack(stack*,void(*)(StackEntry));

#endif