#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100


/**
 * @struct Stack
 * @brief Represents a stack data structure.
 * 
 * The Stack struct contains the top index and an array of items.
 * The top index represents the index of the topmost element in the stack.
 * The items array stores the elements of the stack.
 */
typedef struct Stack {
    int top; /**< The index of the topmost element in the stack. */
    char items[MAX_SIZE]; /**< The array of items in the stack. */
} Stack;


/**
 * Initializes the stack by setting the top index to -1.
 *
 * @param stack The stack to be initialized.
 */
void initialize(struct Stack *stack) {
    stack->top = -1;
}


/**
 * Checks if the stack is empty.
 * 
 * @param stack The stack to be checked.
 * @return 1 if the stack is empty, 0 otherwise.
 */
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}


/**
 * Pushes an item onto the stack.
 * 
 * @param stack The stack to push the item onto.
 * @param item The item to be pushed onto the stack.
 */
void push(struct Stack *stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = item;
}


/**
 * Removes and returns the top element from the stack.
 * If the stack is empty, it prints an error message and exits the program.
 *
 * @param stack The stack from which to pop the element.
 * @return The top element of the stack.
 */
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

/**
 * Checks if the parentheses in the given expression are balanced.
 *
 * @param expression The expression to check for balanced parentheses.
 * @return 1 if the parentheses are balanced, 0 otherwise.
 */
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


/**
 * Evaluates a postfix expression and returns the result.
 *
 * @param expression The postfix expression to be evaluated.
 * @return The result of the evaluation.
 */
int evaluatePostfix(char expression[]) {
    Stack stack;
    initialize(&stack);

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (isdigit(expression[i]) != 0)
        {
            push(&stack,expression[i] - '0');
        }else{
            int first = pop(&stack);
            int second = pop(&stack);
            switch (expression[i])
            {
            case '*': push(&stack, first * second); break;
            case '/': push(&stack, first / second); break;
            case '+': push(&stack, first + second); break;
            case '-': push(&stack, first - second); break;
            }
        }
    }
    return pop(&stack);
}

void numberClassifier(int x,int n){
    Stack stack;
    initialize(&stack);
    int list[n];
    int temp;
    int i = 0;
    do {
        printf("Enter a number: ");
        scanf("%d",&temp);
    //     if (isEmpty(&stack) == 0){
    //         int top = pop(&stack);
    //         if(temp < top){
    //             list[i] = temp;
    //             push(&stack, top);
    //             i++;
    //         }else{
    //             list[i] = top;
    //             push(&stack, temp);
    //             i++;
    //         }
    //     }else{
    //         push(&stack, temp);
    //     }
    //     n--;
    // }while (n != 0);
    
    for (int i = 0; i < x; i++)
    {
        printf("%d ",list[i]);
    }
}

int main() {
    char expression[MAX_SIZE];

    // printf("Enter an expression: ");
    // fgets(expression, MAX_SIZE, stdin);

    // if (areParenthesesBalanced(expression)) {
    //     printf("Parentheses are balanced\n");
    // } else {
    //     printf("Parentheses are not balanced\n");
    // }

    // printf("Enter a postfix expression: ");
    // // fgets(expression, MAX_SIZE, stdin);
    // strcpy(expression, "12+4*");
    // int result = evaluatePostfix(expression);

    // printf("Result: %d\n", result);

    numberClassifier(5,5);

    return 0;
}