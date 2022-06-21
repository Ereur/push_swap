CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

FUNC =  push_swap.c ./push_swap_utils/ft_datatoarray.c  ./push_swap_utils/operations.c  ./push_swap_utils/operations1.c ./push_swap_utils/error_handler.c \
		./push_swap_utils/ft_check_args.c ./push_swap_utils/ft_radix.c ./push_swap_utils/ft_sort_five_nbr.c ./push_swap_utils/ft_sort_nbr.c ./push_swap_utils/libft/libft.a
FUNC_BONUS = checker.c ./push_swap_utils/get_next_line.c ./push_swap_utils/ft_check_args.c ./push_swap_utils/error_handler.c \
			 ./push_swap_utils/operations.c ./push_swap_utils/operations1.c ./push_swap_utils/libft/libft.a
NAME = push_swap
NAME_BONUS = checker
OBJ = *.o
NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME):
	@echo $(CURSIVE)$(GRAY) "-MAKING PUSH_SWAP..." $(NONE)
	@cd ./push_swap_utils/libft && make
	@cd ./push_swap_utils/libft && make bonus
	@$(CC) $(CFLAGS) $(FUNC) -o $(NAME)
	@echo  $(GREEN) "DONE!"

bonus: $(NAME_BONUS)

$(NAME_BONUS):
	@echo  $(CURSIVE)$(GRAY) "-MAKING BONUS..." $(NONE)
	@cd ./push_swap_utils/libft && make
	@cd ./push_swap_utils/libft && make bonus
	@$(CC) $(CFLAGS) $(FUNC_BONUS) -o $(NAME_BONUS)
	@echo  $(GREEN) "DONE!"

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	@rm -rf $(OBJ)
	@cd ./push_swap_utils/libft && make clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	@rm -rf $(NAME) $(NAME_BONUS)
	@cd ./push_swap_utils/libft && make fclean

re : fclean all

.PHONY: re fclean all clean bonus