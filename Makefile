NAME	= bsq

CC	= gcc

RM	= rm -f

SRCS	= ./bsq.c \
	  ./src/draw.c \
	  ./src/get_dimensions.c \
	  ./src/malloc_2d_array.c \
	  ./src/min_val.c \
	  ./usual_fn/my_getnbr.c \
	  ./usual_fn/my_putchar.c \
	  ./usual_fn/my_putnbr.c \
	  ./usual_fn/my_putstr.c \
	  ./usual_fn/my_revstr.c \
	  ./usual_fn/my_strdup.c \
	  ./usual_fn/my_strlen.c \
	  ./usual_fn/str_to_int.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./proto/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
