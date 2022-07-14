SRCFILES=	Wati-Main.c	\
			Wati-Debug.c \
			Wati-Hardcode_sort.c \
			Wati-One_Shot_sort.c\
			Wati-Parsing.c \
			Wati-Radix.c \
			Wati-Stack.c \
			Wati-Swap_actions_1.c \
			Wati-Swap_actions_2.c \
			Wati-Swap_actions_3.c \
			Wati-Utilis.c


NAME = push_swap

OBJS = ${SRCFILES:.c=.o}

INC = Wati_PushSwap.h

CC  = gcc

RM  = rm -f

CFLAGS = -Wall -Wextra -Werror -I ./includes -g

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(INC)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re