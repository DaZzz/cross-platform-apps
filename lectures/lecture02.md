
## Лекция #2

$@ - имя текущей цели
$^ - параметры

```make 
    # Строковый тип перменных 
    SOURCES := a.cpp b.cpp

    # $(patsubst %.cpp, out/%.o, ${SOURCES}) - для выражений выполняет преобразование

    # $(SOURCES:%.cpp=out/%.o) - для переменных выполняет преобразование

    mkdir
```

Фальшивая цель - не предполагает файл с таким именем (сл. 22)

Если запустим `make clean` проверит, что не запускали ранее.

`include ../common.mak ../variables.mak` - подключение файлов
`-include ../common.mak ../variables.mak` - можно подключать файлы которые не существуют

`CPPFLAGS += -I include` смотреть так же в каталоге include

`vpath (шаблон) (каталоги, в которых искать)...`

Флаги:
    `-MMD` - генерация списка зависимостей в формате make
    `-MP` - не помещать стандартные заголовочные файлы
    `-I dir` - файлы для include так же ищутся в каталоге dir