LST_SRCS	=	check_arg.c						\
				end_prog.c						\
				error.c							\
				fill_stack_b.c					\
				indexing_a.c					\
				init_function.c					\
				init_stacks.c					\
				pa.c							\
				pb.c							\
				push_swap.c						\
				ra.c							\
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

LST_OBJS	=	${LST_SRCS:.c=.o}
SRCS		=	$(addprefix sources/,${LST_SRCS})
OBJS		=	$(addprefix .objects/,${LST_OBJS})
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
NAME		= 	push_swap
HEADER		=	includes/push_swap.h
RM			=	rm -rf
INC			=	-I includes/
LFT			=	libft/libft.a

.objects/%.o: sources/%.c $(HEADER)
	mkdir -p .objects
	${CC} ${CFLAGS} -I includes/ -c $< -o $@

${NAME} :	$(OBJS)
	make -C ./libft
	${CC} ${CFLAGS} ${OBJS} ${LFT} -o $(NAME) 

all: $(LFT) ${NAME}

clean :
	${RM} .objects

fclean :	clean
	${RM} ${NAME} 

re :		fclean all

${LFT}:
	make re -C ./libft

.PHONY :	re fclean clean all