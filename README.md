To run:

- open cmd line and ubuntu shell
- in cmd line run "flex lang.lxi" to generate the lex.yy.c code file
- in ubuntu shell run "gcc lex.yy.c -o your_lex"
- in ubuntu shell run "./your_lex < p1.txt"
