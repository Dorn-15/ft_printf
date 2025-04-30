NAME = libftprintf.a
LIBFT = libft.a
LIBFT_DIR = ./libft

SRCS = ft_printf.c \
	ft_print_address.c \
	ft_print_base.c \
	ft_print_char.c \
	ft_print_hex.c \
	ft_print_nbr.c \
	ft_print_str.c \
	ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I libft

AR = ar -rcs
RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT) .

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME) $(LIBFT)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re makelib
