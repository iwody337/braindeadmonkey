// циклн
// предусловия
//  for (инициализация до цикла; условие; что делать после цикла){тело цикла}
//  делай что-то пока условие истина !0
//  while (условие) {тело цикла}
//  делай что-то пока условие истина !0
//  постусловие
//  do {тело цикла} while (условие);
//  сделай, потом проверь
//  если условие всегда истина - бесконечный  цикл

int arrays[SIZE] = {0}; // объявил массив arrays, размером SIZE
// и заполнил нулями {0}
// обход по массиву через цикл
for (int i = 0; i < SIZE; ++i)
{
    // объявили переменнную i с значением 0 - счетчик (для индекса в arrays)
    // условие пока i меньше size
    // инкрементируем (прибавляем +1 к i) в конце цикла
    arrays[i] = 2; // заполнили все элементы 2
    printf("arrays [%d]=%d\n"; arrays[i]);
    // вывод индексов элементов массива и их значение
    // цикл заканчивается, выполняется ++i
} // конец блока (тела/for)
// for выполняется от 0 до size -1
// в начале проверяется условие, потом выполняется блок
// вновь проверка условия, если истина выполняется блок
// пока условия не ложь
// обратный вывод массива
// for (int i=size 1; i>0; --i){}
// дойти до середины
// for (int i=0; i=size/2: ++i){}
// два счетчика
for (int i = 0, j = size - 1; i < size; ++i, --j)
{
}
// то же самое, только через while
int chetchik = 0;
while (chetchik < size)
{
    arrays[chetchik = 2] printf("arrays[%d]=%d\n", chetchik, arrays[chetchik]);
    ++chetchik;
}
// если chetchik объявить внутри while
// после каждой итерации он бы вновь равнялся 0
chetchik = 0; // обнуляем
int sum = 0   // объявляем и присваиваем значение 0
    while (chetchik < size)
{
    sum += chetchik; // 0+1+2+3+4=10
    ++chetchik;
}
// linux command:
// pwd - показать путь где мы
// ls - показать содержимое каталога где мы
// mkdir - создать каталог(папка)
// rmdir - удалить пустой каталог(папку)
// touch - создать файл
// rm - удалить файл
// rm - rf - удалить все
// cd - перейти в каталог(папку)
//.- текущий каталог
//..- каталог выше code
//.- открыть vscode из текущего каталога
// cd..- перейти на каталог выше(назад)
// / -абсолютный путь(путь из системных файлов)
//.cat - вывести содержимое файла в терминал
// GIT
// ssh-keygen - сгенерировать ключ ssh
// cat .ssh/id_rsa.gub - вывести ключ
// git config --global.name "nick"
// git config --global.email "email"
// git branch - показать какая ветка
// git status - показать изменения
// git clone  "ссылка ssh из гх"
// git add - добавить файлы для push
// git add . - добавить все
// git commit -m "komment" - закомментировать изменения для push
// git pull origin main(название ветки) - стянуть(скачать) изменения с гх
// git push origin main(название ветки) - запушить изменения в гх   
