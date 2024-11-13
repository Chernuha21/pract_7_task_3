#include <iostream>
#include <queue>
#include <string>

int main() {
    // Створення черги для символів
    std::queue<char> charQueue;

    // Слово для заповнення черги
    std::string word = "student";

    // Додаємо символи слова до черги
    for (char c : word) {
        charQueue.push(c);
    }

    // Перевірка, чи черга містить слово "студент"
    std::string checkWord;
    while (!charQueue.empty()) {
        checkWord += charQueue.front(); // Додаємо символ до рядка
        charQueue.pop(); // Видаляємо символ з черги
    }

    // Виводимо результат перевірки
    if (checkWord == word) {
        std::cout << "This word in cherzi: " << word << std::endl;
    }
    else {
        std::cout << "There is no this word: " << word << std::endl;
    }

    return 0;
}
