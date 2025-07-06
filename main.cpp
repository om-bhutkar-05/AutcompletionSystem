#include <iostream>
#include "DictionaryTrie.hpp"

int main() {
    DictionaryTrie trie;

    // Insert words
    trie.insert("cat", 10);
    trie.insert("car", 5);
    trie.insert("carbon", 2);
    trie.insert("can", 6);
    trie.insert("cap", 7);

    std::string prefix;
    std::cout << "Enter prefix: ";
    std::cin >> prefix;

    auto results = trie.predictCompletions(prefix, 3);
    std::cout << "Top completions:\n";
    for (const auto& word : results) {
        std::cout << word << "\n";
    }

    return 0;
}

