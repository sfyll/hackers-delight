# Compiler and flags
CC = gcc
CFLAGS = -Wall -O3

# All source directories
SRC_DIRS = $(wildcard */)

# Find all .c files
SRC_FILES = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)*.c))

# Convert source file paths to binary paths
BIN_FILES = $(patsubst %.c, build/%, $(SRC_FILES))

all:
	@echo Source Directories: $(SRC_DIRS)
	@echo Source Files: $(SRC_FILES)
	@echo Binaries: $(BIN_FILES)

# Default target
all: $(BIN_FILES)

# Rule to build each binary
build/%: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -o $@

# Cleaning up binaries and build folder
clean:
	rm -rf build