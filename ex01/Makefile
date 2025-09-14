NAME=animal
OBJS=src/main.o src/Dog.o src/Cat.o src/Animal.o src/WrongAnimal.o src/WrongCat.o src/Brain.o
INCLUDE=src/Dog.hpp src/Cat.hpp src/Animal.hpp src/WrongAnimal.hpp src/WrongCat.hpp src/Brain.hpp
CXX= c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98 
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m
RED = \033[31m

all: $(NAME) 
	@echo Execute o Programa: ./animal

$(NAME): $(OBJS)
	@$(CXX) $(CFLAGS) $(OBJS) -o $(NAME) 
	@echo -e "$(GREEN)[✓] Compilado: $(NAME)$(RESET)"

$(OBJS): $(INCLUDE)

clean:
	rm -f $(OBJS)
	rm -rf objs
	@echo -e "$(RED)Objectos eliminados$(RESET)"

fclean: clean
	@rm -rf $(NAME)

re: fclean  all

