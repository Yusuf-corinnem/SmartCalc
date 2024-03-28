CFLAGS = -c -Wall -Werror -Wextra -std=c11
LDFLAGS = -Wall -Werror -Wextra -std=c11
SOURCE = s21_*.c

all: install

install: uninstall
	mkdir SmartCalc
	cd SmartCalc && cmake -B build "../../QT/Calc" && make -C build Calc
	cp -R SmartCalc/build/Calc.app ~/Desktop

uninstall:
	rm -rf SmartCalc ~/Desktop/Calc.app

dvi:
	open ../README_RUS.md

dist: uninstall install
	mkdir archiv
	@cp -r Backend Makefile s21_smartcalc.c s21_smartcalc.h ../QT/Calc archiv
	@tar -cf s21_smartcalc.tar archiv
	rm -rf archiv

test: clean 
	gcc $(LDFLAGS) -o test test.c Backend/*.c s21_smartcalc.c -lcheck
	./test

gcov_report:
	gcc --coverage -o test test.c Backend/*.c s21_smartcalc.c -lcheck
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open ./report/index.html
	rm -rf *.gcno *.gcda *.info test

install_brew:
	git clone https://github.com/Homebrew/brew ~/goinfre/homebrew
	eval "$(goinfre/homebrew/bin/brew shellenv)"

install_lcov:
	brew install lcov
	
clang:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -i *.c *.h Backend/*.c
	rm -rf .clang-format

clang_review:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -n *.c *.h Backend/*.c
	rm -rf .clang-format

clean:
	rm -rf calc *.o s21_smartcalc.tar archiv SmartCalc ~/Desktop/Calc.app