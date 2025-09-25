#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */
void printMemVec(vector<int> v)
{
    for(size_t i = 0; i < size(v); i++)
    {
        cout << v[i] << "\t" << &v[i] << endl;
    }
    return;
}
/**
 * @brief increments all of the elements in v by 10
 * 
 * @param v - adress to a vector of integers
 */
void incVecBy10(vector<int> &v)
{
    for(size_t i = 0; i < size(v); i++)
    {
        v[i] += 10;
    }
    return;
}

int main()
{
    const int SIZE = 5;
    vector<int> vec(5,0);
    for(size_t i = 0; i < size(vec); i++)
    {
        vec[i] = 100 + i;
    }
    cout << "Before increment-----------\n";
    printMemVec(vec);
    incVecBy10(vec);
    cout << "After increment-----------\n";
    printMemVec(vec);
    vec.pop_back();
    cout << "After Pop-----------\n";
    printMemVec(vec);
    vec.push_back(101);
    vec.push_back(102);
    cout << "After Push------------\n";
    printMemVec(vec);

    return 0;
}