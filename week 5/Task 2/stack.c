#include "stack.h"

 void CreateStack(stack *s){
	s->top=0;
}
 void Push(StackEntry e,stack *ps){
   ps->entry[ps->top]=e;
   ps->top++;

}
 char Pop(stack *ps){
	return ps->entry[--ps->top];
	
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
 char StackTop(stack *ps){
	return ps->entry[ps->top-1];
  
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