CALC_LAMPS = calc_lamps.c
CALC_LAMPS_OUT = calc_lamps

JUMP_AVE = jump_average.c
JUMP_AVE_OUT = calc_jump_average

TXT_FILE = txt_file.c
TXT_FILE_OUT = txt_file

BUBBLE_SORT = bubble_sort.c
BUBBLE_SORT_OUT = bubble_sort

# Compiler settings
CC = gcc
INC  = -I../include
INC += -I../include/calc_lamps.h

CFLAGS = -Wall $(INC)

# Executable dir out
BIN_DIR = ../bin

# Rules
calc_lamps: $(CALC_LAMPS)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(CALC_LAMPS_OUT) $<

calc_jump_average: $(JUMP_AVE)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(JUMP_AVE_OUT) $<

txt_file: $(TXT_FILE)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(TXT_FILE_OUT) $<

bubble_sort: $(BUBBLE_SORT)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(BUBBLE_SORT_OUT) $<

all: calc_lamps calc_jump_average txt_file bubble_sort

clean:
	rm -f $(BIN_DIR)/$(CALC_LAMPS_OUT) $(BIN_DIR)/$(JUMP_AVE_OUT) $(BIN_DIR)/$(TXT_FILE_OUT) $(BIN_DIR)/$(BUBBLE_SORT_OUT)
