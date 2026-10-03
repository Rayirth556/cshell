
CC = gcc

CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g -O0

TARGET = bin/shell
SOURCE = src/shell.c

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

debug: $(TARGET)
	gdb ./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run debug clean
