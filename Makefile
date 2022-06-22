NAME = libft.a

CC = cc

WALL = -Wall -Wextra -Werror 

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

RM = rm -f

AR = ar rcs

.o.c:
	$(CC) $(WALL) -c $< -o ${<:.c=.o}
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

bonus: $(NAME)

re: fclean all

.PHONY: all clean fclean re