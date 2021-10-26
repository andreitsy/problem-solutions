#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

typedef struct temperature_entry {
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int minute;
    int temperature;
} temperature_entry;

typedef struct statistic {
    size_t num_entries;
    long long total_temp;
    int min_temp;
    int max_temp;
} statistic;

extern char *temperatures_filename;

void parse_temp_file();

void print_all_stat();
void print_month_stat(int month);

int incorrect_temperature_entry(unsigned line_num,
                                int year, int month, int day, int temperature);

void statistics_add(statistic *s, int temperature);

void statistics_init(statistic *s);

void statistics_print(statistic *s);

#endif // TEMP_FUNCTIONS_H