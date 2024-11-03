NAME = libft.a

HEADERS = libft.h

SRCS_DIR = ./

SRCS =
SRCS += ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_itoa.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_split.c
SRCS += ft_strchr.c
SRCS += ft_strdup.c
SRCS += ft_striteri.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strmapi.c
SRCS += ft_strncmp.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strtrim.c
SRCS += ft_substr.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c

BONUS =
BONUS += ft_lstadd_back_bonus.c
BONUS += ft_lstadd_front_bonus.c
BONUS += ft_lstclear_bonus.c
BONUS += ft_lstdelone_bonus.c
BONUS += ft_lstiter_bonus.c
BONUS += ft_lstlast_bonus.c
BONUS += ft_lstmap_bonus.c
BONUS += ft_lstnew_bonus.c
BONUS += ft_lstsize_bonus.c

SRCALL = $(SRCS) $(BONUS)

OBJS = $(SRCS:.c=.o)
OBJSALL = $(SRCALL:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(SRCS_DIR)

AR = ar -rcs
RM = rm -f

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJSALL)
	$(AR) $(NAME) $(OBJSALL)

all: $(NAME)

clean:
	$(RM) $(OBJSALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
