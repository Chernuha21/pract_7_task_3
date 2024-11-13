#include <iostream>
#include <queue>
#include <string>

int main() {
    // ��������� ����� ��� �������
    std::queue<char> charQueue;

    // ����� ��� ���������� �����
    std::string word = "student";

    // ������ ������� ����� �� �����
    for (char c : word) {
        charQueue.push(c);
    }

    // ��������, �� ����� ������ ����� "�������"
    std::string checkWord;
    while (!charQueue.empty()) {
        checkWord += charQueue.front(); // ������ ������ �� �����
        charQueue.pop(); // ��������� ������ � �����
    }

    // �������� ��������� ��������
    if (checkWord == word) {
        std::cout << "This word in cherzi: " << word << std::endl;
    }
    else {
        std::cout << "There is no this word: " << word << std::endl;
    }

    return 0;
}
