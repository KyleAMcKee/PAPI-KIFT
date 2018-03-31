CLIENT = client
SERVER = server
LISTENER = listener
LIBFT = libft/libft.a
CLIENTFILES = 	client.c \
				parser.c \
				papi_utilities.c \
				commandparse.c \
				commands/commands.c \
				commands/run_commands.c \
				commands/run_commands2.c \
				commands/run_commands3.c \
				commands/run_commands4.c \
				commands/run_commands5.c \
				commands/run_commands6.c

SRCDIR = srcs/
CFILES = $(addprefix $(SRCDIR), $(CLIENTFILES))
SERVERFILES = 	$(SRCDIR)server.c
LISTENFILES =	$(SRCDIR)listener.c
LIBDIR = libft/
INCDIR = includes/
SRC = $(wildcard $(SRCDIR)*.c)
FLAGS = -Wall -Werror -Wextra

all: $(LIBFT) $(SERVER) $(CLIENT) $(LISTENER)

$(LIBFT):
	@make -C $(LIBDIR)

$(CLIENT):
	@gcc $(FLAGS) $(CFILES) $(LIBFT) -I $(INCDIR) -o $(CLIENT)
	@echo "PAPI CLIENT COMPILED!"

$(SERVER):
	@gcc $(FLAGS) $(SERVERFILES) $(LIBFT) -I $(INCDIR) -o $(SERVER)
	@echo "PAPI SERVER COMPILED!"

$(LISTENER):
	@gcc $(FLAGS) $(LISTENFILES) $(LIBFT) -I $(INCDIR) -o $(LISTENER)
	@echo "PAPI LISTENER COMPILED!"

clean:
	@rm -rf $(OBJDIR)
	@make clean -C $(LIBDIR)

fclean:
	@make clean
	@rm -rf $(CLIENT)
	@rm -rf $(SERVER)
	@rm -rf $(LISTENER)
	@make fclean -C $(LIBDIR)

re:	
	@make fclean
	@make all

.PHONY: all clean fclean re
