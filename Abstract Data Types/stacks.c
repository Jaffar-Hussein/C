#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a stack
typedef struct Stack {
    int top;
    char items[MAX_SIZE];
}Stack ;

// Function to initialize an empty stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

int areParenthesesBalanced(char expression[]) {
    // Implementation using the stack
    Stack stack;
    initialize(&stack);

    for (int i = 0; expression[i] != '\0'; i++){
         if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            push(&stack, expression[i]);
        }else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}'){
            if (isEmpty(&stack))
            {
                return 0;
            }

            char topElement = pop(&stack);

             if ((expression[i] == ')' && topElement != '(') ||
                (expression[i] == ']' && topElement != '[') ||
                (expression[i] == '}' && topElement != '{')) {
                return 0; // Unbalanced parentheses
            }

            
        }

    }
    // If the stack is empty at the end, then the parentheses are balanced
    return isEmpty(&stack);
}


int main() {
    char expression[MAX_SIZE];

    printf("Enter an expression: ");
    fgets(expression, MAX_SIZE, stdin);

    if (areParenthesesBalanced(expression)) {
        printf("Parentheses are balanced\n");
    } else {
        printf("Parentheses are not balanced\n");
    }

    return 0;
}