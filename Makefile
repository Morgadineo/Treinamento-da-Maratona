# Makefile para códigos C++

GPP = g++

EX_FILES = $(wildcard *.exe)
CPP_FILES = $(wildcard *.cpp)
TARGETS = $(patsubst %.cpp,%,$(CPP_FILES))

# FLAGS do g++ utilizadas:
#  std=c++17: Padrão 17 do C++;
#  Wall     : Habilita a maioria dos erros do compilador;
#  Wextra   : Habilita ainda mais erros do compilador;
#  Werror   : Transforma 'warnings' em erros;
#  g3       : 'g' melhora o debug do compilador, passando informações extras de debug. 
#             3 é o nível, responsável por passar as macros presentes no programa pro compilador;
#  O0       : 'O' são diretivas de otimização. 0 desabilita as otimizações.
FLAGS = -std=c++11 -Wall -Wextra -Wpedantic -g3 -O2

# Libary FLAGS do g++ utilizadas:
#  -l: Importa as bibliotecas para o g++;
#  m : 'm' de 'math'. Biblioteca matemática do g++;
#  rt: Permite extensões para trabalhar com o tempo POSIX.
LFLAGS = -lm -lcrypt -lrt

.PHONY: all clean

all: $(TARGETS)

%: %.cpp
	$(GPP) $(FLAGS) $< -o $@ $(LFLAGS)

clean:
	rm -f $(EX_FILES) $(TARGETS)

clean-%:
	rm -f $*.exe $*
