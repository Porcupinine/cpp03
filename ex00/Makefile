# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lpraca-l <lpraca-l@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/17 13:22:42 by lpraca-l      #+#    #+#                  #
#    Updated: 2024/01/17 13:22:42 by lpraca-l      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#--------------------------------------------------------------------Executable
NAME	:= ex00

#----------------------------------------------------------------------Compiler
CC 		=  c++

#-------------------------------------------------------------------------Flags
CFLAGS	+= -Wextra -Wall -Werror
ASANFLAGS += -g -fsanitize=address -fsanitize=leak

#----------------------------------------------------------------Libraries path

#-----------------------------------------------------------------------Headers
HEADER	= ClapTrap.h
#---------------------------------------------------------------------Libraries

#------------------------------------------------------------------------Source
SRC	:= main.cpp \
		ClapTrap.cpp

#-----------------------------------------------------------------------Objects
OBJS	:= ${SRC:.cpp=.o}

#---------------------------------------------------------------------Directory
OBJ_DIR := objs/
OBJECTS_PREFIXED := $(addprefix $(OBJ_DIR), $(OBJS))

#-------------------------------------------------------------------------Rules
all: $(NAME)

$(OBJ_DIR)%.o : %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) $(OBJECTS_PREFIXED) -o $(NAME)
	@echo "ex00 is ready!"

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re