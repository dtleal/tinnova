CALC_LAMPS = calc_lamps.c
CALC_LAMPS_OUT = calc_lamps

EXE2_SRC = exercicio_02.c
EXE2_OUT = exe02

EXE3_SRC = exercicio_03.c
EXE3_OUT = exe03

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

exe02: $(EXE2_SRC)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(EXE2_OUT) $<

exe03: $(EXE3_SRC)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(EXE3_OUT) $<

exe04: $(EXE4_SRC)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(EXE4_OUT) $<

all: exe01 exe02 exe03 exe04

clean:
	rm -f $(BIN_DIR)/$(EXE1_OUT) $(BIN_DIR)/$(EXE2_OUT) $(BIN_DIR)/$(EXE3_OUT) $(BIN_DIR)/$(EXE4_OUT)
