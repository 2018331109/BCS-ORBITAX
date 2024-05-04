#include <iostream>
#include <algorithm>

using namespace std;

int calculateArea(int x1, int y1, int x2, int y2)
{
    int width = abs(x2 - x1);
    int height = abs(y2 - y1);
    return width * height;
}

int areaWithoutIntersection(int x1_1, int y1_1, int x2_1, int y2_1, int x1_2, int y1_2, int x2_2, int y2_2)
{
    int area1 = calculateArea(x1_1, y1_1, x2_1, y2_1);
    int area2 = calculateArea(x1_2, y1_2, x2_2, y2_2);
    int x_overlap = max(0, min(x2_1, x2_2) - max(x1_1, x1_2));
    int y_overlap = max(0, min(y2_1, y2_2) - max(y1_1, y1_2));
    int intersectionArea = x_overlap * y_overlap;
    int totalArea = area1 + area2 - intersectionArea;

    return totalArea;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x1_1, y1_1, x2_1, y2_1;
        int x1_2, y1_2, x2_2, y2_2;
        cin >> x1_1 >> y1_1 >> x2_1 >> y2_1;
        cin >> x1_2 >> y1_2 >> x2_2 >> y2_2;
        int result = areaWithoutIntersection(x1_1, y1_1, x2_1, y2_1, x1_2, y1_2, x2_2, y2_2);
        cout << result << endl;
    }

    return 0;
}

