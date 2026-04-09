# Compilador
CC = gcc
 
#Bandera de compilacion
CFLAGS = -Wall -Wextra -Iinclude

#Archivos a copilar
SRS = srs/*.c main.c

#Nombre del ejecutable
TARGET = lista_ligada

#Regla principal para compilar
all:
	$(CC) $(CFLAGS) $(SRS) -o $(TARGET)

#Regla para ejecutar
run: all
	./$(TARGET)

#Regla para borrar los archivos generados la compilar
clean:
	rm -f $(TARGET)
	
