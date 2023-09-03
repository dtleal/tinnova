CALC_LAMPS = calc_lamps.c
CALC_LAMPS_OUT = calc_lamps

JUMP_AVE = jump_average.c
JUMP_AVE_OUT = calc_jump_average

TXT_FILE = txt_file.c
TXT_FILE_OUT = txt_file

EXE4_SRC = exercicio_04.c
EXE4_OUT = exe04

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

exe04: $(EXE4_SRC)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(EXE4_OUT) $<

all: calc_lamps calc_jump_average txt_file exe04

clean:
	rm -f $(BIN_DIR)/$(EXE1_OUT) $(BIN_DIR)/$(JUMP_AVE_OUT) $(BIN_DIR)/$(TXT_FILE_OUT) $(BIN_DIR)/$(EXE4_OUT)
