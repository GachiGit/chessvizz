
#Компилятор
CC=gcc
#Ключи компиляции
CFLAGS=-Wall -Werror -c

#Путь к src
SRC=src/
#Путь к build
BUILD=build/
dirt=buildt/
#Путь к bin
BIN=bin/
#Перечень объектных фаилов
objects=$(BUILD)main.o $(BUILD)board.o $(BUILD)board_read.o $(BUILD)board_print_plain.o $(BUILD)board_f.o
objects_test=$(dirt)main_test.o $(dirt)board.o $(dirt)board_read.o $(dirt)board_print_plain.o $(dirt)board_f.o
#Исходники
sources=$(SRC)main.c $(SRC)board.c $(SRC)board_read.c $(SRC)board_print_plain.c $(SRC)board_f.c
#Исполняемый фаил
EXE=$(BIN)main

.PHONY: all clean

all: bin build buildt $(EXE) test

test: $(BIN)main_test
	$(BIN)main_test

$(EXE): $(objects)
	$(CC) $(objects) -o $@

$(BUILD)main.o: $(SRC)main.c
	$(CC) $(CFLAGS) $(SRC)main.c -o $@

$(BUILD)board_read.o: $(SRC)board_read.c $(SRC)board_read.h
	$(CC) $(CFLAGS) $(SRC)board_read.c -o $@

$(BUILD)board_print_plain.o: $(SRC)board_print_plain.c $(SRC)board_print_plain.h
	$(CC) $(CFLAGS) $(SRC)board_print_plain.c -o $@

$(BUILD)board.o: $(SRC)board.c $(SRC)board.h
	$(CC) $(CFLAGS) $(SRC)board.c -o $@

$(BUILD)board_f.o: $(SRC)board_f.c $(SRC)board_f.h
	$(CC) $(CFLAGS) $(SRC)board_f.c -o $@

$(BIN)main_test: $(objects_test)
	$(CC) $(FLAGS) $(objects_test) -o $@

$(dirt)main_test.o: test/main.c thirdparty/ctest.h $(SRC)board.h $(SRC)board_read.h $(SRC)board_print_plain.h $(SRC)board_f.h
	$(CC) $(CFLAGS) -I thirdparty -I src -c test/main.c -o $@

$(dirt)board_print_plain.o: $(SRC)board_print_plain.c $(SRC)board_print_plain.h
	$(CC) $(CFLAGS) $(SRC)board_print_plain.c -o $@

$(dirt)board_read.o: $(SRC)board_read.c $(SRC)board_read.h
	$(CC) $(CFLAGS) $(SRC)board_read.c -o $@

$(dirt)board_f.o: $(SRC)board_f.c $(SRC)board_f.h
	$(CC) $(CFLAGS) $(SRC)board_f.c -o $@

$(dirt)board.o: $(SRC)board.c $(SRC)board.h
	$(CC) $(CFLAGS) $(SRC)board.c -o $@

bin:
	mkdir bin

build:
	mkdir build

buildt:
	mkdir buildt

clean:
	-rm -rf build bin buildt

