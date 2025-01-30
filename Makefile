NAME = libft.a
SOURCES = 							\
	str/ft_strlen.c 				\
	str/ft_strmapi.c 				\
	str/ft_striteri.c 				\
	str/ft_strnstr.c 				\
	str/ft_strjoin.c 				\
	str/ft_strtrim.c 				\
	str/ft_strlcpy.c 				\
	str/ft_strchr.c					\
	str/ft_strlcat.c 				\
	str/ft_strdup.c					\
	str/ft_substr.c 				\
	str/ft_toupper.c 				\
	str/ft_tolower.c 				\
	str/ft_strncmp.c 				\
	str/ft_strrchr.c 				\
	is/ft_isdigit.c 				\
	is/ft_isprint.c 				\
	is/ft_isalpha.c 				\
	is/ft_isascii.c 				\
	is/ft_isalnum.c 				\
	is/ft_isspace.c					\
	mem/ft_memset.c 				\
	mem/ft_bzero.c 					\
	mem/ft_memcpy.c					\
	mem/ft_memmove.c				\
	mem/ft_memchr.c 				\
	mem/ft_memcmp.c 				\
	mem/ft_calloc.c 				\
	put/ft_putchar_fd.c				\
	put/ft_putstr_fd.c 				\
	put/ft_putendl_fd.c				\
	put/ft_putnbr_fd.c 				\
	convert/ft_split.c 				\
	convert/ft_itoa.c 				\
	convert/ft_atoi.c 				\
    lists/ft_lstnew.c			    \
	lists/ft_lstadd_front.c	        \
	lists/ft_lstsize.c		        \
	lists/ft_lstlast.c		        \
	lists/ft_lstadd_back.c	        \
	lists/ft_lstdelone.c            \
	lists/ft_lstiter.c		        \
	lists/ft_lstclear.c		        \
	ptr/ft_swap.c					\
    gnletprintf/ft_print_char.c     \
    gnletprintf/ft_print_hex.c      \
    gnletprintf/ft_print_nbr.c      \
    gnletprintf/ft_print_pointer.c  \
    gnletprintf/ft_print_string.c   \
    gnletprintf/ft_print_unbr.c     \
    gnletprintf/ft_printf.c          \
    gnletprintf/get_next_line.c     \

OBJECTS = $(SOURCES:.c=.o)

CC = cc
INCLUDE = -I .
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)
AR = ar

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus fclean re