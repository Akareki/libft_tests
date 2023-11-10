make fclean all
cc -Wall -Wextra -Werror -c -I. tests/mainis.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "a" "1" " " "@" "a"
cc -Wall -Wextra -Werror -c -I. tests/mainstrlenchrcmp.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "abcdefgfedcba" "d" "abcdefGfedcba" 6
./main "abcdefgfedcba" "d" "abcdefGfedcba" 7
cc -Wall -Wextra -Werror -c -I. tests/mainstrnstr.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "test" "ttettesetttestOKOKOKOK" 13
./main "test" "ttettesetttestOKOKOKOK" 18
./main "OKOO" "OKOKOKOK" 5
./main "" "OKOKOKOK" 0
cc -Wall -Wextra -Werror -c -I. tests/mainsubstrtrim.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "012345OK00OK543210" 6 6 "0123456789"
cc -Wall -Wextra -Werror -c -I. tests/mainstrjoin.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "start" "end"
./main "" "end"
./main "start" ""
./main "" ""
cc -Wall -Wextra -Werror -c -I. tests/mainatoitoa.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main 0
./main "     +12345a6789"
./main "     -12345a6789"
./main "     +-12345a6789"
./main "-2147483648"
cc -Wall -Wextra -Werror -c -I. tests/mainsplit.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "HELLO!" "L"
./main "XXXHELLO!XXX" "X"
./main "XXXXXXX" "X"
cc -Wall -Wextra -Werror -c -I. tests/mainmapiteri.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main "00000000000000000000000000"
./main ""
cc -Wall -Wextra -Werror -c -I. tests/mainallmem.c -o main.o
cc -Wall -Wextra -Werror main.o -L. libft.a -o main
./main 30 A 9
