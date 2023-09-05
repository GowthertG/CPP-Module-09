NAME = btc
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS =  src/main.cpp src/BitcoinExchange.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean : #no objects file to clean

fclean : clean
	rm -rf $(NAME)

re : fclean all
