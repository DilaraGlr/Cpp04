#--------------------Colors---------------------

GREEN 			= \033[0;32m
RED 			= \033[0;31m
YELLOW 			= \033[0;33m
CYAN 			= \033[1;36m
MAGENTA 		= \033[0;35m
ORANGE 			= \033[38;5;216m
NC 				= \033[0m

#--------------------Program--------------------

NAME 			= Brain

#--------------------Compilation----------------

CC				= c++
CFLAGS 			= -Wall -Wextra -Werror -std=c++98
RM				= rm -rf

#--------------------PATHS----------------------

OBJ_PATH		= objects

#--------------------Sources--------------------

HEADERS			= $(addsuffix .hpp, \
					AMateria \
					ICharacter \
					Cure \
					Ice \
					IMateriaSource \
					MateriaSource \
					Character \
					Materia \
					)

SRCS 			= $(addsuffix .cpp, \
					main \
					Cure \
					Ice \
					Materia \
					Character \
					MateriaSource \
					)

OBJS			=	$(SRCS:%.cpp=$(OBJ_PATH)/%.o)

DEPS			=	$(OBJS:.o=.d)

#--------------------RULES---------------------

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "${MAGENTA}$@ ${GREEN}Compiled successfully${NC}"


$(OBJ_PATH)/%.o: %.cpp $(HEADERS)
			@mkdir -p $(dir $@)
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_PATH)
	@echo "${YELLOW}Finished cleaning${NC}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${YELLOW}Complete cleaning completed${NC}"

re: fclean all

-include $(DEPS)

run: $(NAME)
	@./$(NAME) file bonjour ciao

valgrind: $(NAME)
	@valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re