NAME = RPN
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 
SRCS =  src/main.cpp src/RPN.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean : clean

re : clean all

run : all