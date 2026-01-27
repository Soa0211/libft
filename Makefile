NAME = libft.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_strlen.c\
OBJS = $(SOURCES : .c = .o)
all : $(NAME)

