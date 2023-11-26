# structure of a make file
# target: dependencies
# À l'image de la dernière diapositive de votre cours sur les makefiles, construisez le fichier makefile permettant de compiler une calculatrice simple. Votre programme doit être composé de 5 fichiers : un fichier principal (demandant à l’utilisateur l’opération et les entiers), un fichier décrivant la fonction d’addition, de même pour la soustraction, la multiplication et la division.
# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Name of the executable
TARGET = calculator

# All .c files
SRCS = main.c add.c subtract.c multiply.c divide.c

# All .o files
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

.c.o:
    $(CC) $(CFLAGS) -c $<  -o $@

clean:
    $(RM) $(TARGET) $(OBJS)