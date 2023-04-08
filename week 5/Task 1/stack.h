#include "Global.h"
 #include <stdio.h>
 #define StackEntry char

#define STACK_ARRAY

#ifdef STACK_ARRAY
 typedef struct stack{
	int top;
    StackEntry entry [MAXSTACK];	
 }stack;
 
 #else
 typedef struct stacknode{
	StackEntry entry;
    struct stacknode* next;	
 }stacknode;
 
 typedef struct stack{
	 stacknode* top;
	 int size;
 }stack;
 
 #endif
  void CreateStack(stack*);
  int StackEmpty(stack*);
  int StackFull(stack*);
  void Push(StackEntry,stack*);
  void Pop(StackEntry*,stack*);
  void StackTop(StackEntry*,stack*);
  int StackSize(stack*);
  void ClearStasck(stack*);
  void TraverseStack(stack*,void(*)(StackEntry));