# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 16:43:56 by jsabound          #+#    #+#              #
#    Updated: 2023/10/21 15:20:42 by jsabound         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
OBJS = $(SRCS:.cpp=.o)
# DEPS = $(SRCS:.cpp=.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
# CFLAGS += MMD
# CFLAGS += -g3
# CFLAGS += -fsanitize=address
INCLUDE = -I. 

NAME = Animal

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(OBJS)

# -include $(DEPS)
%.o: %.cpp
	$(CC) -c -Wall -Wextra -Werror -std=c++98 -o $@ $<
	
clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

leak: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re
