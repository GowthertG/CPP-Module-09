NAME = RPN
CC = c++
CCPFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS =  src/main.cpp src/RPN.cpp

OBJS = $(SRCS:.cpp=.o)
all : $(NAME)

$(NAME) : $(SRCS) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all