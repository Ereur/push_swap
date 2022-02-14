CC = cc
CFLAGS = -Wall -Wextra -Werror
FUNC =  push_swap.c ./push_swap_utils/ft_datatoarray.c  ./push_swap_utils/operations.c  ./push_swap_utils/operations1.c ./push_swap_utils/error_handler.c \
		./push_swap_utils/ft_check_args.c ./push_swap_utils/ft_radix.c ./push_swap_utils/ft_sort_five_nbr.c ./push_swap_utils/ft_sort_nbr.c ./push_swap_utils/libft/libft.a
FUNC_BONUS = checker.c ./push_swap_utils/get_next_line.c ./push_swap_utils/ft_check_args.c ./push_swap_utils/error_handler.c \
			 ./push_swap_utils/operations.c ./push_swap_utils/operations1.c ./push_swap_utils/libft/libft.a
NAME = push_swap
NAME_BONUS = checker

all: $(NAME)

$(NAME): libft
	gcc $(FUNC) -o push_swap

libft:  
	cd ./push_swap_utils/libft && make
	cd ./push_swap_utils/libft && make bonus

bonus: libft $(NAME_BONUS)

$(NAME_BONUS):
	gcc $(FUNC_BONUS) -o checker

clean:
	rm -f $(NAME) $(NAME_BONUS)
	cd ./push_swap_utils/libft/ && rm -f *.o

.PHONY: re fclean all clean bonus