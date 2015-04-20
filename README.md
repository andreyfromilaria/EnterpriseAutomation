# EnterpriseAutomation
This is my summer practice at the university.

### Как запустить проект?

1. Скачиваем [cmake](http://www.cmake.org)
2. Клонируем/скачиваем этот репозиторий себе.
3. Открываем [cmake](http://www.cmake.org), указываем путь к нашей папке с репозиторием (первая строчка)
4. Создаем директорию, где будет находиться собранный проект (рекомендуется скопировать содержимое первой строки во вторую и добавить к ней **/Build**)
5. Жмём **Configure**.
6. Когда конфигурация пройдёт, жмём **Generate**.
7. Заходим в папку с проектом, собираем сначала проект **ALL_BUILD**, а затем **EAMain**.

## Владельцам OS X

Для сохранения **.xls** файлов необходимо указывать полный путь, например:

### Это не правильно:

``` C++
int main(int argc, const char * argv[])
{
    NiceExample("NiceExample.xls");
    LiteExample("LiteExample.xls");
    return 0;
}
```

### Это правильно

``` C++
int main(int argc, const char * argv[])
{
    NiceExample("/Users/ИмяТекущегоПользователя/NiceExample.xls");
    LiteExample("/Users/ИмяТекущегоПользователя/NiceExample.xls");
    return 0;
}
```
