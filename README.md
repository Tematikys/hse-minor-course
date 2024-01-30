# Лабараторная работа №1

## Задание
Реализуйте структуру данных стек `Stack<T, Alloc = std::allocator<T>>`.
* Ваша реализация должна работать аналогично `std::stack<T, Alloc>`
* Вместо операторов `new / delete` должен использоваться аллокатор `Alloc`:
  * для выделения памяти используйте следующие операции: `T *data = Alloc.allocate(size); Alloc.deallocate(data, size);`

## Требования
Все операции, за исключением `push` должны работать за строгое `O(1)` времени. `push` должен работать за амортизированное `O(1)`.

## Приватные тесты
Публичные тест проверяют лишь корректность сигнатур для какого-то минимального набора `T`. 
Проверка времени работы, выделяемой памяти элементарные.
В этой лабараторной работе много приватных тестов, которые в значительной степень проверяют все возможные развития событий.  

## Сдача работы
Для сдачи работы Вам требуется создать отдельную ветку с назанием лабораторной работы и Pull Request строго по форме по форме "<lab-name> <ФИО>".

## Оценивание
Оценка за лабораторную работу состоит из двух частей: корректность и стиль. 
Обе части стоят по 5 баллов. 
За стиль нельзя получить больше, чем за корректность. 
Если какой-либо из публичных тестов не проходит проверку, за корректность автоматически ставится 0. 

## Дедлайны
Задание выдано: 30.01.2024.
Дедлайн сдачи: 07.02.2025 23:59.
