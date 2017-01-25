NAME =libft.a
SRC_DIR = ./
INCLUDES_DIR = ./
FUNCTIONS=ft_putchar ft_putstr ft_atoi ft_strcat ft_bzero ft_strchr\
	  ft_putnbr ft_isalnum ft_strcmp ft_isalpha ft_strcpy\
	  ft_isascii ft_strdup ft_isdigit ft_strlen ft_isprint\
	  ft_strncat ft_memccpy ft_strncmp ft_memchr ft_strncpy\
	  ft_memcmp ft_strrchr ft_memcpy ft_memmove ft_tolower\
	  ft_memset ft_toupper ft_memcpy_rev ft_strstr ft_putendl\
	  ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
	  ft_strnstr ft_strlcat ft_memalloc ft_memdel ft_strnew\
	  ft_strdel ft_strclr ft_striter ft_striteri ft_strmap\
	  ft_strmapi ft_strequ ft_strnequ ft_strsub ft_strjoin\
	  ft_strtrim ft_itoa ft_reverse ft_strsplit ft_lstnew\
	  ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap
FLAGS=-Wall -Wextra -Werror
BINS = $(patsubst %,%.o,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	gcc -I $(INCLUDES_DIR) $(FLAGS) -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(BINS)
	ar ruv $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
