#include <stdio.h>
#include <stdlib.h>
#include "parse_args.h"

void usage_info_print(char *exec_file) {
    fprintf(stderr, "Try '%s -h' for more information.\n", exec_file);
}

void parse_args(int argc, char *argv[]) {
    size_t optind;
    if (argc == 1) {
        usage_info_print(argv[0]);
        exit(EXIT_FAILURE);
    }

    for (optind = 1; optind < argc; optind++) {
        if (argv[optind][0] != '-') {
            fprintf(stderr, "Unknown argument %s \n",
                    argv[optind]);
            usage_info_print(argv[0]);
            exit(EXIT_FAILURE);
        } else {
            switch (argv[optind][1]) {
                case 'f':
                    optind++;
                    if ((optind < argc) && (argv[optind][0] != '-')) {
                        temperatures_filename = argv[optind];
                    } else {
                        fprintf(stderr, "Missing filename\n");
                        usage_info_print(argv[0]);
                        exit(EXIT_FAILURE);
                    }
                    break;
                case 'm':
                    optind++;
                    if ((optind < argc) && (argv[optind][0] != '-')) {
                        month_str = argv[optind];
                    } else {
                        fprintf(stderr, "Missing month\n");
                        usage_info_print(argv[0]);
                        exit(EXIT_FAILURE);
                    }
                    break;
                case 'h':
                    printf("This application computes statistics for "
                           " months for csv file in the following format:\n\n"
                           "dddd;mm;dd;hh;mm;temperature\n\n"
                           "dddd - year, 4 digits\n"
                           "mm - month, 2 digits\n"
                           "dd - day, 2 digits\n"
                           "hh - hour, 2 digits\n"
                           "mm - minutes, 2 digits\n"
                           "temperature - number between -99 and 99\n\n"
                           "Usage %s -f FILENAME [-m] [MONTH]\n",
                           argv[0]);
                    exit(EXIT_SUCCESS);
                default:
                    fprintf(stderr, "Unknown argument -%c \n",
                            argv[optind][1]);
                    usage_info_print(argv[0]);
                    exit(EXIT_FAILURE);
            }
        }
    }
    check_arguments(argv[0]);
}

void check_arguments(char *exec_file) {
    FILE *file;

    if (temperatures_filename == NULL) {
        fprintf(stderr, "Missing argument -f \n");
        usage_info_print(exec_file);
        exit(EXIT_FAILURE);
    }
    if ((file = fopen(temperatures_filename, "r")) != NULL) { // exists
        fclose(file);
    } else { // file not found/not exists
        fprintf(stderr, "Missing file '%s'\n", temperatures_filename);
        exit(EXIT_FAILURE);
    }
    if ((month_str != NULL) &&
        ((atol(month_str) < 1) || (atol(month_str) > 12))) {
        fprintf(stderr, "Incorrect month value '%s'\n", month_str);
        exit(EXIT_FAILURE);
    }
}
