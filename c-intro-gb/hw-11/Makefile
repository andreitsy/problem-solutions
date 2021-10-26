CC=gcc
CFLAGS=-std=c99
OBJ = temp_stat.o temp_functions.o parse_args.o
all: temperature_statistics

temperature_statistics: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o temperature_statistics

temp_stat.o: temp_stat.c temp_functions.h parse_args.h
	$(CC) $(CFLAGS) -c temp_stat.c

temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

parse_args.o: parse_args.c parse_args.h
	$(CC) $(CFLAGS) -c parse_args.c

.PHONY: clean

clean:
	rm $(OBJ) temperature_statistics