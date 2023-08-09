NAME = btc
CC = c++
# FLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS =  src/main.cpp src/BitcoinExchange.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean : clean

re : clean all

run : all
	./bin	