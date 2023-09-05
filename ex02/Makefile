NAME = PmergeMe
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS =  src/main.cpp src/PmergeMe.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean : #no object file to clean
	

fclean : clean
	rm -rf $(NAME)

re : fclean all