#include <iostream>

void findDuplicates(const char *str) {
    int visited[256] = {0}; // Array to keep track of visited characters
    int i = 0;
    
    while (str[i] != '\0') {
        visited[str[i]]++;
        i++;
    }

    std::cout << "Character count of duplicates:" << std::endl;
    for (i = 0; i < 256; i++) {
        if (visited[i] > 1) {
            std::cout << (char)i << ": " << visited[i] << std::endl;
        }
    }
}

int main() {
    const char str[] = "programming";
    findDuplicates(str);
    return 0;
}
