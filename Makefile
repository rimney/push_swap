NAME = push_swap
SRCS = assign_functions.c \
		assist_functions00.c \
		assist_functions01.c \
		basic_tests.c \
		ft_sort_big_stack.c \
		ft_sort_medium_stack.c \
		inster_element_to_stack.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		sort_big_stack.c \
		swap.c \
		main.c \

CC = gcc
FLAGS = -Wall -Wextra -Werror
$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : clean fclean all