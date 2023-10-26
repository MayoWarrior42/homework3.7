#define MODE 1

#ifdef MODE
#if MODE == 0
#include <iostream>

int main() {
    system("chcp 1251");
    std::cout << "Работаю в режиме тренировки" << std::endl;
    return 0;
}

#elif MODE == 1
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    system("chcp 1251");
    std::cout << "Работаю в боевом режиме" << std::endl;
    int a, b;
    std::cin >> a >> b;
    std::cout << "Результат сложения: " << add(a, b) << std::endl;
    return 0;
}

#else
#error "Неизвестный режим. Завершение работы"
#endif

#else
#error "Необходимо определить MODE"
#endif