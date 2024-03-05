CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = main.c temp_functions.c
OBJ = $(SRC:.c=.o)
EXEC = temperature_stats

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
