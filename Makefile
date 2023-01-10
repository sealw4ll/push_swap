SRCS =	func_push.c func_rotate.c func_rev_rotate.c func_swap.c parse.c \
		utils.c init.c check_sort.c exit.c ./GNL/get_next_line.c \
		./GNL/get_next_line_utils.c

all:
	gcc push_swap.c $(SRCS) *.a -fsanitize=address -o push_swap

bonus:
	gcc push_swap_bonus.c $(SRCS) *.a -fsanitize=address -o checker