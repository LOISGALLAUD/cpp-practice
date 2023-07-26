/*
Recursive Apple problem

Reverse a string using a recursive algorithm.
*/

#include <iostream>
#include <string>
#include <chrono>

class Solution
{
public:
    std::string reverse(std::string word, int index = 0)
    {
        if (index == word.length())
        {
            return "";
        }
        else
        {
            std::string reversed = reverse(word, index + 1);
            reversed += word[index];
            return reversed;
        }
    }
};

int main()
{
    Solution s;
    std::string input = "JE SUIS LOIS GALLAUD ET J'AI 19 ANS.";
    auto start_time = std::chrono::high_resolution_clock::now();

    std::string result = s.reverse(input);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();

    std::cout << "Résultat inversé : " << result << std::endl;
    std::cout << "Temps d'exécution : " << duration << " microseconds" << std::endl;

    return 0;
}