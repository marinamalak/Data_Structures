#include "stack.h"
#include <stdlib.h>

#ifdef STACK_ARRAY
 void CreateStack(stack *s){
	s->top=0;
}
 void Push(StackEntry e,stack *ps){
   ps->entry[ps->top]=e;
   ps->top++;

}
 void Pop(StackEntry* pe,stack *ps){
	*pe=ps->entry[--ps->top];
}
 int StackEmpty(stack *ps){
	 if(ps->top <=0)
		 return 1;
	 else
		 return 0;
 }
 int StackFull(stack *ps){
	 if(ps->top >=MAXSTACK)
		 return 1;
	 else
		 return 0;
 }
 void StackTop(StackEntry *pe,stack *ps){
	*pe=ps->entry[ps->top-1];  
  } 
 int StackSize(stack *ps){
	 return ps->top;
 } 
 void ClearStasck(stack *ps){
	 ps->top=0;
 } 
 void TraverseStack(stack *ps,void(*pf)(StackEntry)){
	  for(int i=ps->top;i>0;i--)
		  (*pf)(ps->entry[i-1]);
  }
  
#else
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
  
 #endif