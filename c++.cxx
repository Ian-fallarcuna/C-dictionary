#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> dictionary;
    std::string word;

    // Add terms to the dictionary
    dictionary["jolt"] = "A sudden shock or movement.";
    dictionary["glimpse"] = "A quick or brief look.";
    dictionary["class"] = "Blueprint for objects.";
    dictionary["flicker"] = "A brief or unsteady light.";
    dictionary["array"] = "Collection of items.";
    dictionary["snatch"] = "To grab somethign quickly.";
    dictionary["plunge"] = "To dive or fall suddenly.";

    while (true) {
        std::cout << "\nEnter a word to search (or 'exit' to quit): ";
        std::getline(std::cin, word);

        if (word == "exit") {
            std::cout << "Goodbye!\n";
            break;
        }

        if (dictionary.find(word) != dictionary.end()) {
            std::cout << word << ": " << dictionary[word] << "\n";
        } else {
            std::cout << "Word not found!\n";
        }
    }

    return 0;
}