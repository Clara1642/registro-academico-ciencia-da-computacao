# Compilador C Simplificado

Projeto de Construção de Compiladores: análise léxica e sintática para uma versão simplificada de C. A arquitetura separa tokens, lexer, parser e orquestração do compilador.

## Compilar e executar

```bash
mkdir build
gcc -Wall -Wextra -std=c11 -Isrc/token -Isrc/lexer -Isrc/parser -Isrc/compiler src/main.c src/token/token.c src/lexer/lexer.c src/parser/parser.c src/compiler/compilador.c -o build/compilador
./build/compilador examples/input.txt
```

Os testes de lexer e parser estão em `tests/`. A documentação de arquitetura e os exemplos do projeto original foram preservados.
