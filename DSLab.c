#include <stdio.h> #include <stdlib.h>
#define MAX 100 typedef struct {
int top;
int arr[MAX];
} Stack;

// Function to create an empty stack void initialize(Stack *s) {
s->top = -1;
}

// Function to push an element onto the stack void push(Stack *s, int value) {
if (s->top == MAX - 1) { printf("Stack Overflow!\n"); return;
}
s->arr[++(s->top)] = value; printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack int pop(Stack *s) {
if (s->top == -1) {
printf("Stack Underflow!\n"); return -1;
}
return s->arr[(s->top)--];
}
 

// Function to return the top element of the stack int peek(Stack *s) {
if (s->top == -1) { printf("Stack is empty!\n"); return -1;
}
return s->arr[s->top];
}

// Function to display stack elements void display(Stack *s) {
if (s->top == -1) { printf("Stack is empty!\n"); return;
}
printf("Stack elements: ");
for (int i = 0; i <= s->top; i++) { printf("%d ", s->arr[i]);
}
printf("\n");
}

int main() { Stack s; initialize(&s);

push(&s, 10);
push(&s, 20);
push(&s, 30); display(&s);
printf("Peek element: %d\n", peek(&s));
printf("Popped element: %d\n", pop(&s)); display(&s);

return 0;
}
