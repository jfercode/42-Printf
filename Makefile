NAME = libftprintf.a

CC = cc

HEADER_DIR = ./

C_FLAGS = -Wall -Werror -Wextra -g3 -I $(HEADER_DIR)

SRC_FILES = ft_printf.c ft_printf_utils.c 

OBJS = $(SRC_FILES:.c=.o)

MAIN_DIR = ../Extras
MAIN_SRC = $(MAIN_DIR)/main.c
MAIN_OBJ = $(MAIN_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(MAIN_OBJ)
	rm -f ./test_program

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME) $(MAIN_OBJ)
	$(CC) $(C_FLAGS) -o test_program $(MAIN_OBJ) $(NAME)
	@./test_program
	rm -f ./test_program

$(MAIN_OBJ): $(MAIN_SRC)
	$(CC) $(C_FLAGS) -c $< -o $@