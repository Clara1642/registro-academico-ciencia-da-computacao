# Portfólio acadêmico de Maria Clara

Este repositório reúne o material de estudos e exercícios desenvolvidos ao longo do curso de Ciência da Computação. Ele tem caráter acadêmico e de documentação pessoal, não representa uma compilação profissional de projetos de mercado, mas sim a trajetória real de aprendizagem em lógica, estruturas de dados, linguagem de programação e aplicações computacionais.

## Objetivo

- Registrar exercícios, roteiros de aula, notebooks e projetos didáticos em uma estrutura navegável.
- Preservar a autenticidade do trabalho, incluindo diferentes níveis de complexidade e acabamento.
- Facilitar a consulta por recrutadores, professores e colegas que desejem entender a evolução técnica.

## Estrutura do repositório

| Disciplina / área | Conteúdo principal | Linguagens e ferramentas |
| --- | --- | --- |
| [algebra-linear-computacional](./algebra-linear-computacional) | Notebooks de álgebra linear, criptografia, transformações e sistemas lineares | Python, NumPy, Jupyter |
| [calculo-computacional](./calculo-computacional) | Cálculo diferencial e integral com aplicações em notebooks | Python, SymPy, Jupyter |
| [construcao-compiladores](./construcao-compiladores) | Compilador simplificado com lexer, parser, tokens e testes | C |
| [estruturas-dados-c](./estruturas-dados-c) | Listas, filas, pilhas, deques e hashing em C | C |
| [fundamentos-hardware](./fundamentos-hardware) | Projeto de hardware e GPIO em Raspberry Pi | Python, hardware embarcado |
| [fundamentos-python](./fundamentos-python) | Lógica de programação, condicionais, laços, funções, recursão e registros iniciais | Python |
| [infraestrutura-software](./infraestrutura-software) | Concorrência, sincronização e algoritmos de exclusão mútua | C, pthreads |
| [metodos-numericos](./metodos-numericos) | Estudos e notebooks com métodos numéricos | Python, Jupyter |
| [poo-java](./poo-java) | Exercícios e projetos orientados a objetos em Java | Java |
| [programacao-estruturada-c](./programacao-estruturada-c) | Vetores, matrizes, strings, structs, ponteiros e arquivos | C |
| [projetos-exploratorios](./projetos-exploratorios) | Atividades e notebooks exploratórios | Python, Jupyter |

## Tipos de atividade presentes

- Exercícios de lógica e revisão
- Programas em C e Java independentes
- Notebooks de matemática aplicada e computação
- Projetos didáticos e estudos de caso
- Arquivos de apoio, amostras de dados e testes locais

## Tecnologias observadas

- Python 3
- C (gcc/clang)
- Java (javac)
- Jupyter Notebook
- NumPy, pandas, matplotlib, scipy, scikit-learn e sympy

## Como executar

### Python

```bash
cd fundamentos-python
python3 exercicios/lacos-e-numeros/numero-perfeito.py
```

### C

```bash
cd construcao-compiladores
mkdir -p build
gcc -Wall -Wextra -std=c11 -Isrc/token -Isrc/lexer -Isrc/parser -Isrc/compiler \
  src/main.c src/token/token.c src/lexer/lexer.c src/parser/parser.c src/compiler/compilador.c \
  -o build/compilador
./build/compilador examples/input.txt
```

### Java

```bash
cd poo-java
javac -d out $(find . -name "*.java")
```

### Notebooks

```bash
python -m pip install -r requirements-notebooks.txt
```

## Observações

- Os materiais foram preservados de forma fiel ao contexto acadêmico em que foram produzidos.
- Exercícios simples, registros iniciais e versões alternativas foram mantidos quando ajudavam a contextualizar o aprendizado.
- Arquivos específicos de uso local, como guia interno e README de perfil, não fazem parte da publicação pública e foram mantidos fora do Git de publicação.

## Navegação por disciplina

- [Fundamentos em Python](./fundamentos-python/README.md)
- [Programação estruturada em C](./programacao-estruturada-c/README.md)
- [Estruturas de dados em C](./estruturas-dados-c/README.md)
- [Orientação a objetos em Java](./poo-java/README.md)
- [Álgebra linear computacional](./algebra-linear-computacional/README.md)
- [Cálculo computacional](./calculo-computacional/README.md)
- [Métodos numéricos](./metodos-numericos/README.md)
- [Fundamentos de hardware](./fundamentos-hardware/README.md)
- [Infraestrutura de software](./infraestrutura-software/README.md)
- [Construção de compiladores](./construcao-compiladores/README.md)
- [Projetos exploratórios](./projetos-exploratorios/README.md)

## Limitações conhecidas

- O conteúdo reúne atividades acadêmicas reais com variação de complexidade, sem padronização de acabamento técnico.
- Alguns projetos dependem de recursos específicos, como GPIO em Raspberry Pi ou ambientes com bibliotecas de suporte.
- A estrutura foi organizada para facilitar consulta e publicação, mas não foi artificialmente reescrita para parecer um portfólio corporativo.
