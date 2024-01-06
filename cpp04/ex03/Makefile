# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 17:34:19 by jsabound          #+#    #+#              #
#    Updated: 2023/11/11 16:12:35 by jsabound         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
# DEPS = $(SRCS:.cpp=.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98  -g3
# CFLAGS += MMD
# CFLAGS += -g3
# CFLAGS += -fsanitize=address
INCLUDE = -I. 

NAME = main

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(OBJS)

# -include $(DEPS)
%.o: %.cpp
	$(CC) -c -Wall -Wextra -Werror -std=c++98 -g3 -o $@ $<
	
clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

leak: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re
