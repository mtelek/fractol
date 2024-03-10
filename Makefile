NAME = fractol
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBXFLAGS = -lmlx -lX11 -lXext
SRCS = init.c main.c math_utils.c render.c utils.c utils2.c events.c number_combinations.c checkers.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(LIBXFLAGS) $(OBJS) -o $(NAME) $(MINILIBX)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
