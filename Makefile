NAME		=	Multigames

SRCS		=	$(wildcard src/*.c)

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-Wall -Wextra

LIB			=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

UNIT		=	unit_tests

.PHONY		: 	all clean fclean re unit_tests tests_run

all			:	$(OBJS)
				@echo "$(NAME) is up to date."
				@gcc -o $(NAME) $(OBJS) $(LIB)

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME)
				rm -f $(UNIT)
				rm -f *.gcno
				rm -f *.gcda

re			:	fclean all

unit_tests	:	fclean all

tests_run	:	unit_tests
				@./$(UNIT) | gcovr --exclude tests/
				@make fclean
