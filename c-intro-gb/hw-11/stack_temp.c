#include <stdio.h>
#include <stdlib.h>
#include "stack_temp.h"

#define INITIAL_SIZE 512

void init_stack(stack *st) {
    st->size = INITIAL_SIZE;
    st->sp = 0;
    st->item = malloc(INITIAL_SIZE * sizeof(temperature_entry));
}

void delete_stack(stack *st) {
    free(st->item);
    st->size = 0;
}

void push(stack *st, temperature_entry value) {
    if (st->sp == st->size - 1) {
        st->size = st->size * 2;
        st->item = realloc(st->item,
                           st->size * sizeof(temperature_entry));
    }
    st->item[st->sp++] = value;
}

temperature_entry *get_temp_entry_stack(stack *st, size_t i) {
    if (i >= st->sp) {
        fprintf(stderr,
                "ERROR: Trying to take value outside of stack!");
        exit(EXIT_FAILURE);
    }
    if (st->sp < 1) {
        fprintf(stderr,
                "ERROR: Trying to take value from empty stack!");
        exit(EXIT_FAILURE);
    }
    return &st->item[i];
}

void pop(stack *st, temperature_entry *value) {
    if (st->sp < 1) {
        fprintf(stderr,
                "ERROR: Trying to take value from empty stack!");
        exit(EXIT_FAILURE);
    }
    *value = st->item[--(st->sp)];
}

int empty_stack(stack *st) {
    return (st->sp < 1);
}