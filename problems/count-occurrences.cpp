/*
Problème : Compter le nombre d'occurrences d'un
élément dans un tableau (Count Occurrences)

Description :
Vous êtes donné un tableau d'entiers et un entier
cible. Votre tâche est de compter le nombre d'occurrences
de l'entier cible dans le tableau donné.
*/

#include <iostream>
#include <vector>
#include <chrono>
#include <random>

class Solution
{
public:
    int countOccurrences(std::vector<int> &array, int target)
    {
        int counter = 0;
        for (auto num : array)
        {
            if (num == target)
            {
                counter++;
            }
        }
        return counter;
    }

    int countOccurrencesRecursive(std::vector<int> &array, int target)
    {
        if (array.size() == 0)
        {
            return 0;
        }
        else
        {
            int counter = 0;
            if (array[0] == target)
            {
                counter++;
            }
            array.erase(array.begin());
            return counter + countOccurrencesRecursive(array, target);
        }
    }
};

std::vector<int> generateTestArray(int size, int min, int max)
{
    std::vector<int> array;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);

    for (int i = 0; i < size; i++)
    {
        array.push_back(dis(gen));
    }
    return array;
}

int main()
{
    Solution s;
    std::vector<int> array = generateTestArray(1000000, 0, 10);
    int target = 0;

    auto start_time = std::chrono::high_resolution_clock::now();

    int result = s.countOccurrences(array, target);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << "Temps d'exécution : " << duration << " milliseconds" << std::endl;

    std::cout << "Résultat:" << result << std::endl;
    return 0;
}