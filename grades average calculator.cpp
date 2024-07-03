#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> grades;
    int input, count = 0;
    float sum = 0.0f;

    while (1)
    {
        cout << "enter your grade (0 to finish)\n>";
        cin >> input;
        if (input != 0)
        {
            grades.push_back(input);
        }
        else
        {
            for (auto & grade: grades)
            {
                sum += grade;
                count++;
            }
            cout << "your GPA is: " << sum/count;
            break;
        } 
    }
}