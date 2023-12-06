CC = gcc
# Target executable
NAME = Rush02
CFLAGS = -Wall -Wextra -Werror -g
OBJS = $(SRC:.c=.o)
SRC = ft_putstr.c \
	init.c main.c \
	ft_putchar.c ft_atoi.c \
	ft_putnbr.c parsing.c solving.c
	
all: $(NAME)

# Rule to build executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
# Rule to build object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS) $(NAME)
