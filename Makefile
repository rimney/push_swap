NAME = push_swap
BONUS_NAME = checker
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

BONUS_SRCS = assign_functions.c \
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
		checker.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \


CC = gcc
FLAGS = -Wall -Wextra -Werror
$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
$(BONUS_NAME) :
	$(CC) $(FLAGS) $(BONUS_SRCS) -o $(BONUS_NAME)
all : $(NAME)
bonus : $(BONUS_NAME)
clean :
	rm -f $(NAME)
	rm -f $(BONUS_NAME)
fclean :
	rm -f $(NAME)
	rm -f $(BONUS_NAME)
re : clean fclean all