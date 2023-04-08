#include <ctype.h>
 #include"stack.h"
 #include"Infix_To_Postfix.h"

// Function to check if a given character is an operator
int isOperator(char op) {
    return (op == '+' || op == '-' || op == '*' || op == '/' || op == '^');
}

// Function to get the precedence of an operator
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void infix_to_postfix(const char *infix, char *postfix,stack s ) {
 //   Stack stack;
  //  stack.top = -1;

    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char c = infix[i];

        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
             Push(c,&s);
        } else if (c == ')') {
            while (!StackEmpty(&s) && StackTop(&s) != '(') {
                postfix[j++] = Pop(&s);
            }
            if (!StackEmpty(&s) && StackTop(&s)== '(') {
                Pop(&s);
            }
        } else {
            while (!StackEmpty(&s) && precedence(c) <= precedence(StackTop(&s))) {
                postfix[j++] =  Pop(&s);
            }
            Push(c,&s);
        }
        i++;
    }

    while (!StackEmpty(&s)) {
        postfix[j++] =  Pop(&s);
    }

    postfix[j] = '\0';
}