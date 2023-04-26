// 1064 - struct & double equality
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

struct point
{
    double x, y;
};
struct ABCD
{
    point array[4];
};

bool check_canbeparallel(ABCD *parallelogram)
{
    point A = parallelogram->array[0];
    point B = parallelogram->array[1];
    point C = parallelogram->array[2];
    if (A.x - B.x == 0)
    {
        if (A.x - C.x == 0)
        {
            return false;
        }
        return true;
    }
    if (A.x - C.x == 0)
    {
        if (A.x - B.x == 0)
        {
            return false;
        }
        return true;
    }

    double ratio1 = (A.y - B.y) / (A.x - B.x);
    double ratio2 = (A.y - C.y) / (A.x - C.x);
    double diff = abs(ratio1 - ratio2);
    if (diff < 1e-11) // double equality is very difficult.
                      // So, we can use the precision of difference. => 1e-11
    {
        return false;
    }
    return true;
}

static double take_points(ABCD *parallelogram)
{

    point A = parallelogram->array[0];
    point B = parallelogram->array[1];
    point C = parallelogram->array[2];
    if (!check_canbeparallel(parallelogram))
    {

        return -1;
    }
    // there are 3 cases of another parallelogram.
    // first, AB is not line.
    // length == 2 * CA + 2 * BC
    double x_diff_1 = A.x - C.x;
    double y_diff_1 = A.y - C.y;
    double x_diff_2 = B.x - C.x;
    double y_diff_2 = B.y - C.y;

    double length_a = 2 * sqrt(x_diff_1 * x_diff_1 + y_diff_1 * y_diff_1);
    double length_b = 2 * sqrt(x_diff_2 * x_diff_2 + y_diff_2 * y_diff_2);
    double length_1 = length_a + length_b;

    // second, BC is not line.
    // length == 2 * AB + 2 * CA
    double x_diff_3 = A.x - B.x;
    double y_diff_3 = A.y - B.y;
    double x_diff_4 = A.x - C.x;
    double y_diff_4 = A.y - C.y;
    double length_c = 2 * sqrt(x_diff_3 * x_diff_3 + y_diff_3 * y_diff_3);
    double length_d = 2 * sqrt(x_diff_4 * x_diff_4 + y_diff_4 * y_diff_4);
    double length_2 = length_c + length_d;

    // third, CA is not line.
    // length == 2 * AB + 2 * BC
    double x_diff_5 = A.x - B.x;
    double y_diff_5 = A.y - B.y;
    double x_diff_6 = B.x - C.x;
    double y_diff_6 = B.y - C.y;
    double length_e = 2 * sqrt(x_diff_5 * x_diff_5 + y_diff_5 * y_diff_5);
    double length_f = 2 * sqrt(x_diff_6 * x_diff_6 + y_diff_6 * y_diff_6);
    double length_3 = length_e + length_f;

    double array[3] = {length_1, length_2, length_3};
    double max_len = length_1;
    double min_len = length_1;
    for (size_t i = 0; i < 3; i++)
    {
        if (array[i] < min_len)
        {
            min_len = array[i];
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        if (array[i] >= max_len)
        {
            max_len = array[i];
        }
    }
    return max_len - min_len;
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ABCD points;

    for (size_t i = 0; i < 3; i++)
    {
        double x, y;
        cin >> x >> y;
        points.array[i].x = x;
        points.array[i].y = y;
    }
    cout << fixed << setprecision(15) << take_points(&points) << '\n';
    return 0;
}