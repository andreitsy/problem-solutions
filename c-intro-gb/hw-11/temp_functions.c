#include <stdio.h>
#include <stdlib.h>
#include "temp_functions.h"

#define MIN_TEMP -100
#define MAX_TEMP 100
#define MONTHS 12

static statistic year_stat;
static statistic month_stat[MONTHS];

int incorrect_temperature_entry(unsigned line_num,
                                int year, int month, int day, int temperature) {
    if (year < 0 || year > 2100) {
        fprintf(stderr, "ERROR: parsing line %u: "
                        "year is incorrect -> %d\n",
                line_num + 1, year);
        return 1;
    }
    if (temperature <= MIN_TEMP || temperature >= MAX_TEMP) {
        fprintf(stderr, "ERROR: parsing line %u: "
                        "temperature is out of range -> %d\n",
                line_num + 1, temperature);
        return 1;
    }
    if (month < 0 || month > 12) {
        fprintf(stderr, "ERROR: parsing line %u: "
                        "month is incorrect -> %d\n",
                line_num + 1, month);
        return 1;
    }
    if (day < 0 || day > 31) {
        fprintf(stderr, "ERROR: parsing line %u: "
                        "day is incorrect -> %d\n",
                line_num + 1, day);
        return 1;
    }
    return 0;
}

void parse_temp_file() {
    FILE *temp_file;
    unsigned line_num = 0;
    int read_args;
    temperature_entry tmp;
    statistics_init(&year_stat);
    for(size_t i = 0; i < MONTHS; ++i) {
        statistics_init(month_stat + i);
    }

    temp_file = fopen(temperatures_filename, "r");
    while ((read_args = fscanf(temp_file, "%4u;%2u;%2u;%2u;%2u;%d",
                               &tmp.year, &tmp.month, &tmp.day,
                               &tmp.hour, &tmp.minute, &tmp.temperature)) != EOF) {
        if (read_args != 6) {
            char line[30];
            fscanf(temp_file, "%[^\n]c", line);
            fprintf(stderr, "ERROR: parsing line %u: '%s'\n",
                    line_num + 1, line);
        } else {
            if (incorrect_temperature_entry(line_num, tmp.year,
                                            tmp.month, tmp.day,
                                            tmp.temperature)) {
                continue;
            }
            statistics_add(&year_stat, tmp.temperature);
            statistics_add(month_stat + tmp.month - 1, tmp.temperature);
        }
        line_num++;
    }
    printf("-------------------------------------------------------------\n\n");
}

void print_all_stat() {
    printf("Temperatures statistics for year:\n");
    statistics_print(&year_stat);
    printf("\n");
    for(size_t i = 0; i < MONTHS; ++i) {
        print_month_stat(i + 1);
    }
}

void print_month_stat(int month) {
    printf("Temperatures statistics for %d month:\n", month);
    statistics_print(month_stat + month - 1);
    printf("\n");
}

void statistics_init(statistic *s) {
    s->total_temp = 0;
    s->num_entries = 0;
    s->min_temp = MAX_TEMP;
    s->max_temp = MIN_TEMP;
}

void statistics_add(statistic *s, int temperature) {
    s->total_temp += temperature;
    s->num_entries += 1;
    if (s->min_temp > temperature) {
        s->min_temp = temperature;
    }
    if (s->max_temp < temperature) {
        s->max_temp = temperature;
    }
}

void statistics_print(statistic *s) {
    printf("%-10s%-10s%-10s\n", "Average ", "Min", "Max");
    if (s->num_entries) {
        double avg = (double)s->total_temp / (double)s->num_entries;
        printf("%-10.2f%-10d%-10d\n", avg, s->min_temp, s->max_temp);
    } else {
        printf("%-10s%-10s%-10s\n", "N/A", "N/A", "N/A");
    }
}

