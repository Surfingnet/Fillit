NAME =fillit
SRC_DIR =./
INCLUDES_DIR =./
SRCS=main ft_checkfile ft_openfile ft_readfile ft_freeman ft_putintab \
ft_checkarray ft_checkcollision ft_movement ft_display ft_letter ft_error \
ft_dynalloc 
FLAGS=-Wall -Wextra -Werror
BINS = $(patsubst %,%.o,$(SRCS))
LIBS =libft

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	gcc -I $(INCLUDES_DIR) $(FLAGS) -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(BINS)
	gcc $(FLAGS) -o $(NAME) $(BINS) $(patsubst %,%.a,$(LIBS))

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
