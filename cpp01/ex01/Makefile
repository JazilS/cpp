# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 17:55:37 by jsabound          #+#    #+#              #
#    Updated: 2023/09/28 17:55:59 by jsabound         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
# DEPS = $(SRCS:.cpp=.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
# CFLAGS += MMD
# CFLAGS += -g3
# CFLAGS += -fsanitize=address
INCLUDE = -I. 

NAME = Zombie

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