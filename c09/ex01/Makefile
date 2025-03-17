CC=cc
CFLAGS = -Wall -Wextra -Werror $(foreach D, $(INC_PATH), -I$(D))
SRC_PATH = ./srcs/
INC_PATH = ./includes/
SRC = $(foreach D, $(SRC_PATH), $(wildcard $(D)/*.c))
OBJ = $(patsubst %.c, %.o, $(SRC))
BIN = bin

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(SRC_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf $(BIN) $(OBJ)
