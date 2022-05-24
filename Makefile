.PHONY :	re fclean clean all
.SILENT:

LST_SRCS	=	check_arg.c						\
				end_prog.c						\
				error.c							\
				fill_stack_b.c					\
				indexing_a.c					\
				init_function.c					\
				init_stacks.c					\
				main.c							\
				pa.c							\
				pb.c							\
				ra.c							\
				radix.c							\
				rb.c							\
				rr.c							\
				rra.c							\
				rrb.c							\
				rrr.c							\
				sa.c							\
				sb.c							\
				shift_in_tab.c					\
				sort_five_or_less.c				\
				sort_three.c					\
				sort.c							\
				ss.c						

P_LFT		:=	libft/
P_SRCS		:=	sources/
P_OBJS		:=	.objects/

LST_OBJS	:=	${LST_SRCS:.c=.o}
SRCS		:=	$(addprefix ${P_SRCS},${LST_SRCS})
OBJS		:=	$(addprefix ${P_OBJS},${LST_OBJS})


CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror
NAME		:= 	push_swap
HEADER		:=	includes/push_swap.h libft/libft.h
RM			:=	rm -rf
INC			:=	-I includes/
LFTA		:=	libft/libft.a

#///////////////////////////////////////////////////////////////////////////////

# Colors
BLACK=\033[30m
RED=\033[31m
GREEN=\033[32m
YELLOW=\033[33m
BLUE=\033[34m
PURPLE=\033[35m
CYAN=\033[36m
WHITE=\033[37m

# Text
ERASE=\033[2K\r
RESET=\033[0m
BOLD=\033[1m
FAINT=\033[2m
ITALIC=\033[3m
UNDERLINE=\033[4m

#///////////////////////////////////////////////////////////////////////////////

all: makelft ${NAME}

${NAME} : ${P_OBJS} ${OBJS} ${HEADER} ${LFTA}
	${CC} ${CFLAGS} ${LFTA} ${OBJS} -o $(NAME)
	printf "\n$(GREEN)$(BOLD)Binary $(NAME) created$(RESET)	✅\n"

$(P_OBJS)%.o: $(P_SRCS)%.c $(HEADER) $(LFTA) Makefile | $(P_OBJS)
	${CC} ${CFLAGS} -I includes/ -c $< -o $@
	printf "$(FAINT)$(CC) $(CFLAGS) -c -o $(RESET)$(CYAN)$(BOLD)$@$(RESET) $(FAINT)$(BLUE)$<$(RESET)\n"

$(P_OBJS):
	mkdir -p $(P_OBJS)
	printf "$(GREEN)$(BOLD)${NAME} fobjects directories created$(RESET)	✅\n"

$(LFTA): makelft

makelft:
	${MAKE} -C libft

clean :
	${RM} ${OBJS}
	${RM} ${P_OBJS}
	printf "$(YELLOW)$(BOLD)All ${NAME} object files removed$(RESET)\n"
	printf "$(YELLOW)$(BOLD)All ${NAME} object folders removed$(RESET)\n"

fclean :	
	${MAKE}	clean
	${RM} ${NAME} 
	$(MAKE) fclean -C libft/
	printf "$(RED)$(BOLD)Binary $(NAME) removed $(RESET)\n"

re :		fclean all