#include <stdio.h>
#include <stdlib.h>
#include "parse_args.h"
#include "temp_functions.h"

char *month_str = NULL;
char *temperatures_filename = NULL;

int main(int argc, char *argv[]) {
    int month = 0;
    parse_args(argc, argv);

    if (month_str != NULL) {
        month = atol(month_str);
    }
    printf("Reading file %s...\n\n",
           temperatures_filename);

    parse_temp_file();
    if (month > 0) {
        print_month_stat(month);
    } else {
        print_all_stat();
    }
}