CC	= gcc -g

RM	= rm -f

NAME	= ai

SRC	= main.c			\
	  calcul_path.c			\
	  my_str_to_wordtab.c		\
	  get_next_line.c   \
	  tmp.c

OBJ	= $(addprefix src/,$(SRC:.c=.o))

CFLAGS	= -W -Wextra -Wall -I include/

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
