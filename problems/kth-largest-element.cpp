/*
Problème : Retourner le k-ème plus grand élément
dans un tableau (Kth Largest Element in an Array)

Description :
Étant donné un tableau d'entiers non trié et un entier k,
trouvez le k-ème plus grand élément dans le tableau.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

class Solution
{
public:
    int kthLargestElement(std::vector<int> &array, int kth)
    {
        array = quickSort(array);

        // Remove duplicates
        int *i = new int(0);
        for (*i; *i < array.size() - 1; (*i)++)
        {
            if (array[*i] == array[*i + 1])
            {
                array.erase(array.begin() + *i);
                (*i)--;
            }
        }
        delete i;

        if (array.size() <= kth)
        {
            return -1;
        }

        return array[kth - 1];
    }
    std::vector<int> quickSort(std::vector<int> &array)
    {
        if (array.size() <= 1)
        {
            return array;
        }
        else
        {
            int pivot = array[0];
            std::vector<int> left;
            std::vector<int> right;
            for (int i = 1; i < array.size(); i++)
            {
                if (array[i] < pivot)
                {
                    left.push_back(array[i]);
                }
                else
                {
                    right.push_back(array[i]);
                }
            }
            left = quickSort(left);
            right = quickSort(right);
            left.push_back(pivot);
            left.insert(left.end(), right.begin(), right.end());
            return left;
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
    std::vector<int> array = generateTestArray(100000, 0, 10);
    int kth = 1;

    auto start_time = std::chrono::high_resolution_clock::now();

    int result = s.kthLargestElement(array, kth);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();

    std::cout << "Result:" << result << std::endl;
    std::cout << "Runtime : " << duration << " milliseconds" << std::endl;
    return 0;
}