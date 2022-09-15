#include <stdio.h>
#include <string.h>

typedef struct stack Stack;

struct stack {
    int top;
    char str[5];
};

void push(Stack *s, char ch);
void pop(Stack *s);
void printData(Stack *s);

int main() {
    Stack myStack;

    myStack.top = 0;
    
    push(&myStack, 'o');    
    push(&myStack, 'g');
    push(&myStack, 'n');

    printData(&myStack);

    pop(&myStack);

    printData(&myStack);

    push(&myStack, 'n');
    push(&myStack, 'a');

    printData(&myStack);

    pop(&myStack);

    printData(&myStack);

    push(&myStack, 'a');
    push(&myStack, 'm');

    printData(&myStack);

    pop(&myStack);

    printData(&myStack);

    push(&myStack, 'm');

    printData(&myStack);

    return 0;
}

void push(Stack *s, char ch) {
    if(s->top < 5) {
        s->str[s->top] = ch;
        s->top = s->top + 1;
    }
    else {
        printf("Data Over flow!\n");
    }
}

void pop(Stack *s) {
    if(s->top == 0) {
        printf("Data Underflow\n");
    }
    else{
        s->top--;
    }
}

void printData(Stack *s) {
    if(s->top == 0) {
        printf("Stack is impty!\n");
    }
    else{
        for(int i = s->top-1; i >= 0; i--){
            printf("%c", s->str[i]);
        }
        printf("\n");
    } 
}