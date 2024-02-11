# Задание №1
* Выбор модели быстрого запуска SAM (Successive Approximation Model) для разработки курса по языку программирования C++ обусловлен несколькими ключевыми факторами.
* Во-первых, гибкая и итеративная методология обучения, предоставляемая моделью SAM, позволяет эффективно адаптировать процесс обучения к различным уровням участников курса. Это критически важно, учитывая разнообразие предварительного опыта и знаний в области программирования среди учащихся.
* Во-вторых, модель SAM активно включает учащихся через постоянный обмен обратной связью и выполнение практических заданий. Для успешного освоения языка программирования C++ необходимо не только теоретическое понимание, но и практические навыки, и SAM предоставляет платформу для их развития.
* Кроме того, модель SAM обеспечивает возможность оперативно реагировать на изменения в учебном процессе и динамично адаптировать содержание курса в соответствии с потребностями учащихся. Это особенно критично в быстро развивающейся области программирования, где новые концепции и технологии появляются на рынке с высокой скоростью.

* Что касается этапов создания курса:
  * Анализ целевой аудитории и определение целей курса требует проведения необходимых исследований и определения потребностей участников. Этот этап займет около 2 недель
  * Разработка курсового материала и структуры курса включает создание детального учебного плана и подготовку необходимых материалов, что займет около 4 недель
  * Создание обучающих материалов и заданий потребует разработки разнообразных учебных материалов и заданий для различных уровней сложности в течение 6 недель
  * Тестирование и обратная связь займет примерно 2 недели, чтобы получить отзывы от тестовой группы участников и проанализировать результаты
  * Корректировка и обновление курса будет происходить непрерывно в соответствии с результатами тестирования и обратной связью участников

* Для создания курса потребуются следующие ресурсы:
  * Преподаватели и эксперты по C++, которые будут разрабатывать учебный материал, проводить занятия и обеспечивать качественную обратную связь для учащихся
  * Выбор и настройка платформы для размещения курса и проведения онлайн-занятий, например, Github
  * Книги, статьи, онлайн-ресурсы и другие учебные материалы для поддержки учебного процесса
  * Бюджет на оплату персонала
 
# Задание №2

## Лабараторная работа №1

### Задание
Реализуйте структуру данных стек `Stack<T, Alloc = std::allocator<T>>`.
* Ваша реализация должна работать аналогично `std::stack<T, Alloc>`
* Вместо операторов `new / delete` должен использоваться аллокатор `Alloc`:
  * для выделения памяти используйте следующие операции: `T *data = Alloc.allocate(size); Alloc.deallocate(data, size);`

### Требования
* Все операции, за исключением `push` должны работать за строгое `O(1)` времени. `push` должен работать за амортизированное `O(1)`.

### Приватные тесты
* Публичные тест проверяют лишь корректность сигнатур для какого-то минимального набора `T`. 
* Проверка времени работы, выделяемой памяти элементарные.
* В этой лабараторной работе много приватных тестов, которые в значительной степень проверяют все возможные развития событий.  

### Сдача работы
* Для сдачи работы Вам требуется создать отдельную ветку с назанием лабораторной работы.
* После создайте Pull Request строго по форме "<lab_name> <ФИО>".

### Оценивание
* Оценка за лабораторную работу состоит из двух частей: корректность и стиль. 
* Обе части стоят по 5 баллов. 
* За стиль нельзя получить больше, чем за корректность. 
* Если какой-либо из публичных тестов не проходит проверку, за корректность автоматически ставится 0. 

### Дедлайны
* Задание выдано: 30.01.2024.
* Дедлайн сдачи: 07.02.2025 23:59.

### P.S.
* Чек-лист:
  1. Это задание нацелено на закрепление пройденного на лекциях материала по шаблонам и работой с динамической памятью.
  2. Ожидается, что после выполнения задание, ученик будет свободно использовать базовый синтаксис шаблонов при написании кода на C++, а также научится аккуратно пользоваться динамической памятью.
  3. Ученик будет итерационно выполнять задание - реализовывать требуемые методы класса по одному. Предполагается, что студент для выполнения задания будет использовать IDE, например, CLion / Visual Studio, или текстовые редакторы, такие как, Sublime Text / Visual Studio Code, в комбинации с командной строкой.
  4. Сложность задания предполагается чуть выше, чем могут ученики, что способствует их развитию. Объем работы не высок, но во время выполнения потребуется обращаться к документации и/или читать статьи на тему задания. Времени на выполнение задания достаточно, чтобы ученик мог выполнять его, когда удобно, но не слишком, чтобы забыть про него.
  5. При возникновении вопроса, ученик может обратиться за помощью в общий чат курса, в котором ему помогу как преподаватели, так и товарищи.
  6. Формат выполнения предполагается полностью в режиме онлайн, с возможностью выполнения задание в удобное для ученика время.
  7. Оценивание состоит из двух частей: оценивание корректности проводится в автоматическом режиме, а стиль оценивается ассистентами курса.
  8. Задание выдаётся на интернет-платформе github. Для этого преподаватель заблаговременно подготавливает и выгружает задание, а также проводит серию лекций по теме задания, на которой даёт необходимый материал для успешного выполнения лабораторной работы.
  9. Задание предполагается чуть выше текущих способностей учащихся, что способствует их вовлечённости, так как не даёт заскучать, но с другой стороны не становится непреодолимой преградой. Также курс рассчитан на людей, заинтересованных в изучении языка программирования C++
* Работы:
  * https://github.com/quuger/stack
  * https://github.com/domosedy/stack_implementation
