#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

void usage_info_print(char *exec_file);
void parse_args(int argc, char *argv[]);
void check_arguments();
extern char *month_str;
extern char *temperatures_filename;

#endif