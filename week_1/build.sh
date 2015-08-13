clang -ggdb -v -Wall -Werror $1 && ./a.out

# -W -means show warnings (in case, -Wall means, show all warning, like "show unusual var, etc...)
# -Werror - it means, if -Wall generate warning, doesn't matter what kind, we will not continue compile
# also, we can compile with gcc:
# gcc hello.c -o hello
# or with make:
# make hello

