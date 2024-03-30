# Instructions
## Makefile targets
- `rebuild`: перекомпилировать программу
- `clang`: применить форматирование google для файлов с расширением .c, .h
- `clang_review`: проверить форматирование google для файлов с расширением .c, .h
- `dvi`: открыть инструкцию
- `dist`: архивирование проекта
- `test`: запуск проверки тестов
- `gcov_report`: показать покрытие проекта тестами
- `clean`: удаление объектных и исполняемого файлов

## Build
- Установка необходимых элементов для показа покрытия:
  - `make install_brew` и `make install_lcov`
- Вызвать `make`, после установки и компиляции файл Calc.app появится на рабочем столе

## Run
- Для запуска программы откройте файл Calc.app

![](https://github.com/Yusuf-corinnem/SmartCalc/blob/main/SmartCalc.gif)

Кредитный калькулятор:
![](https://github.com/Yusuf-corinnem/SmartCalc/blob/main/SmartCalcCredit.gif)
