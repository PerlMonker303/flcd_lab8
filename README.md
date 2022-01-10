To run:

- open cmd line and ubuntu shell
- in cmd run "flex lang.lxi" to generate the lex.yy.c code file
- in ubuntu shell run "gcc lex.yy.c -o your_lex"
- in ubuntu shell run "./your_lex < p1.txt"
- in cmd run "bison -v grammar.y" to get grammar.tab.c
- in ubuntu shell run "gcc -o grammar grammar.tab.c"

# all in unix subsystem

# Bison - lab 9

Just "run.sh px.txt"
