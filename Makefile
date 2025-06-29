CC = gcc
CFLAGS = -Wall -g

# Archivos fuente
LEXER = ada.l
PARSER = ada.y
TARGET = ada_translator

# Archivos generados
LEX_OUT = lex.yy.c
YACC_OUT = ada.tab.c
YACC_HEADER = ada.tab.h

all: $(TARGET)

$(TARGET): $(LEX_OUT) $(YACC_OUT)
	$(CC) $(CFLAGS) -o $(TARGET) $(LEX_OUT) $(YACC_OUT)

$(LEX_OUT): $(LEXER) $(YACC_HEADER)
	flex $(LEXER)

$(YACC_OUT) $(YACC_HEADER): $(PARSER)
	bison -d $(PARSER)

clean:
	rm -f $(LEX_OUT) $(YACC_OUT) $(YACC_HEADER) $(TARGET)

test: $(TARGET)
	./$(TARGET) ejemplo.ada

.PHONY: all clean test