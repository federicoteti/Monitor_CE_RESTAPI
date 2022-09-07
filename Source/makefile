CC=gcc
CFLAGS=-Wall -Werror
LIBS=-lcurl -ljson-c
DEPS=headers/monitor_ce_restapi.h headers/read_input.h headers/check_thresholds.h
OBJ=monitor_ce_restapi.o read_input.o check_thresholds.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

monitor_ce_restapi: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ core
