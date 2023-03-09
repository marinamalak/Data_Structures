#include "stack.h"
#include <stdlib.h>
 void CreateStack(stack *ps){
	ps->top=NULL;
	ps->size=0;
}
 void Push(StackEntry e,stack *ps){
   stacknode *pn=(stacknode*)malloc(sizeof(stacknode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
	ps->size++;
}
 void Pop(StackEntry* pe,stack *ps){
	stacknode* pn;
	*pe=ps->top->entry;
	pn=ps->top;
	ps->top=ps->top->next;
	free(pn);
	ps->size--;
}
 int StackEmpty(stack *ps){
   return ps->top==NULL;
 }
 int StackFull(stack *ps){
		 return 0;
 }
 void StackTop(StackEntry *pe,stack *ps){
	*pe=ps->top->entry;  
  } 
 int StackSize(stack *ps){
	return ps->size;
 } 
 void ClearStasck(stack *ps){
	stacknode* pn=ps->top;
	stacknode* qn=ps->top;
	while(pn){
		pn=pn->next;
		free(qn);
		qn=pn;
	}
	ps->top=NULL;
	ps->size=0;
 } 
 void TraverseStack(stack *ps,void(*pf)(StackEntry)){
	stacknode* pn =ps->top;
	while(pn){
		(*pf)(pn->entry);
		pn=pn->next;
	}
  }