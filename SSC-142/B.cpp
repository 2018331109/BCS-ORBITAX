#include <iostream>

std::string kangaroo(int x1, int v1, int x2, int v2)
{
    if (v1 == v2)
    {
        // Kangaroos have the same jump rate, they will either always be at the same position or never.
        return (x1 == x2) ? "YES" : "NO";
    }
    else if ((x1 - x2) % (v2 - v1) == 0 && (x1 - x2) / (v2 - v1) >= 0)
    {
        // Check if the difference in starting positions is divisible by the difference in jump rates
        // and the number of jumps is non-negative.
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int x1, v1, x2, v2;
    std::cin >> x1 >> v1 >> x2 >> v2;

    std::string result = kangaroo(x1, v1, x2, v2);
    std::cout << result << std::endl;

    return 0;
}

