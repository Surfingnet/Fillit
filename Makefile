NAME =fillit
SRC_DIR =./
INCLUDES_DIR =./
SRCS=main ft_checkfile ft_openfile ft_readfile ft_freeman ft_putintab \
ft_checkarray ft_checkcollision ft_movement ft_display ft_letter ft_error \
ft_dynalloc ft_solver ft_transfer
FLAGS=-Wall -Wextra -Werror
BINS = $(patsubst %,%.o,$(SRCS))
LIBS =libft

.PHONY: all clean fclean re libft

all: $(NAME)

$(LIBS):
	@make -C $(@)

$(BINS):
	gcc -I $(INCLUDES_DIR) $(FLAGS) -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(BINS) $(LIBS)
	gcc $(FLAGS) -o $(NAME) $(BINS) $(LIBS)/$(patsubst %,%.a,$(LIBS))

clean:
	/bin/rm -f $(BINS)
	@make -C $(LIBS) clean

fclean: clean
	/bin/rm -f $(NAME) $(LIBS)/$(patsubst %,%.a,$(LIBS))

re: fclean all
