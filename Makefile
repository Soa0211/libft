NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_strlen.c\

OBJS = $(SOURCES : .c = .o)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o &@
all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME)  $(OBJS)
clean :
	rm -f $(OBJS)

fclean :
	rm -fclean $(NAME)

re :
	fclean all

.PHONY : all clean fclean re
