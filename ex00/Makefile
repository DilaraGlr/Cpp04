
NAME 			= Animal

CC				= c++
CFLAGS 			= -Wall -Wextra -Werror -std=c++98
RM				= rm -rf

OBJ_PATH		= objects

HEADERS			= $(addsuffix .hpp, \
					Animal \
					Cat \
					Dog \
					WrongAnimal \
					WrongCat \
					)

SRCS 			= $(addsuffix .cpp, \
					main \
					Animal \
					Cat \
					Dog \
					WrongAnimal \
					WrongCat \
					)

OBJS			=	$(SRCS:%.cpp=$(OBJ_PATH)/%.o)

DEPS			=	$(OBJS:.o=.d)

#--------------------RULES---------------------

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


$(OBJ_PATH)/%.o: %.cpp $(HEADERS)
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re