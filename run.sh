#!/bin/bash


bison -d grammar.y
flex lang.lxi
gcc grammar.tab.c lex.yy.c -o a
./a ./$1