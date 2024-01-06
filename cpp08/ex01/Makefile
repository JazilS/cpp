# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 13:18:54 by jsabound          #+#    #+#              #
#    Updated: 2023/12/13 16:14:27 by jsabound         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp Span.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
CFLAGS += -MMD
# CFLAGS += -g3
# CFLAGS += -fsanitize=address
INCLUDE = -I. 

NAME = Span

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(OBJS)

-include $(DEPS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME) $(DEPS)

re: fclean all

leak: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re 