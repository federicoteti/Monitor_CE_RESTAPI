CC=gcc
CFLAGS=-Wall -Werror
LIBS=-lcurl -ljson-c
DEPS=headers/monitor_ce_api.h headers/read_input.h headers/check_thresholds.h
OBJ=monitor_ce_api.o read_input.o check_thresholds.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

check_rest_api: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ core
