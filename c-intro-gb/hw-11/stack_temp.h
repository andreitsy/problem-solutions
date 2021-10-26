#ifndef STACK_TEMP_H
#define STACK_TEMP_H
#include "temp_functions.h"

typedef struct temperature_entry {
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minute;
    int temperature;
} temperature_entry;
typedef struct stack {
    temperature_entry *item;
    int size;
    int sp;
} stack;

void init_stack(stack *st);
void delete_stack(stack *st);
void push(stack *st, temperature_entry value);
temperature_entry *get_temp_entry_stack(stack *st, size_t i);
void pop(stack *st, temperature_entry *value);
int empty_stack(stack *st);

#endif //STACK_TEMP_H
