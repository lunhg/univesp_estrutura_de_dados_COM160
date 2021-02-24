# Compilação Automática

Para compilar automaticamente, no Linux, vc deve ter instalado o utilitário `make` e executar:

```
$ make build
```

## Opções para compilação automática

De forma alternativa, é possível especificar a `aula` que será compilada e o `grau` de otimização da compilação, na forma:

```
$ make build.<aula>.<grau>
```

O parâmetro `aula` será compreendido como a pasta dos códigos-fontes. O parâmetro `grau` irá passar o o parâmetro `-O` para o **g++**. Todas as receitas de compilação possuel o parâmetro `-Wall`. Por exemplo:

    - `make build.aula1.O1` é entendido como `g++ aula1/<arquivo>.cpp -Wall -O1 -o <arquivo>`
    - `make build.aula3.O2` é entendido como `g++ aula3/<arquivo>.cpp -Wall -O3 -o <arquivo>`

Para mais detalhes, verifique o arquivo `Makefile`

# Compilação individual

Cada um dos arquivos da aula deve ser compilado separadamente.

Por exemplo: 

$ g++ ex0_hello_world.cpp -o ex0_hello_world

Compilado o código, o arquivo gerado pode ser executado.

$ ./ex0_hello_world

## Compilação sem nome de arquivo de saída

É possível compilar sem fornecer o nome do executável. Nesse caso, o
arquivo gerado terá nome "a.out".

Por exemplo: 

$ g++ ex0_hello_world.cpp

Compilado o código, o arquivo gerado pode ser executado.

$ ./a.out


