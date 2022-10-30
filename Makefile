NAME = ft_printf.a

BASE = ft_printchar.c \
       ft_printf.c \

BONUS = 

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJS = ${BASE:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) ${NAME} ${OBJS}

all: ${OBJS} ${OBJS_BONUS}
	$(AR) ${NAME} ${OBJS} ${OBJS_BONUS}

bonus: ${OBJS_BONUS}
		$(AR) ${NAME} ${OBJS_BONUS}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
		${RM} ${NAME}

re: fclean ${NAME}

reall : fclean all

rebonus : fclean bonus

norm:
	@norminette -R CheckDefine

.PHONY: all bonus clean fclean re reall rebonus norm