SRCS =	ps_func_push.c ps_func_rotate.c ps_func_rev_rotate.c ps_func_swap.c ps_parse.c \
		ps_utils.c ps_init.c ps_check_sort.c ps_exit.c ps_hardcode.c ps_radix.c \
		 \
		./GNL/get_next_line.c ./GNL/get_next_line_utils.c

NAME = push_swap

all: $(NAME)

$(NAME):
	make all -C libft
	gcc push_swap.c $(SRCS) libft/*.a -Wall -Werror -Wextra -fsanitize=address -o push_swap

bonus:
	make all -C libft
	gcc push_swap_bonus.c $(SRCS) libft/*.a -Wall -Werror -Wextra -fsanitize=address -o checker

b: bonus

clean:
	@echo "definetely cleared objects LOL"

fclean: clean
	rm -f push_swap
	rm -f checker

make re: fclean all