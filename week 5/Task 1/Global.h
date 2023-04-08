#ifndef GLOBAL_H
#define GLOBAL_H

typedef struct elementtype{
	short int	etype; 
	union{
		int		year;
		float	age;
		void	*ptr;
		char	par;
	}info;
}ElementType; 

#define MAXELEMENTS 100

typedef ElementType StackEntry;
#define MAXSTACK MAXELEMENTS

typedef ElementType QueueEntry;
#define MAXQUEUE MAXELEMENTS

#endif

