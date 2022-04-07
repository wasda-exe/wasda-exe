#include <stdio.h>
#include <string.h>

// 3
// 9
// 7
// 5
// 2
// 2

int main()
{
    float x1, x2, x3, y1, y2, y3, m12, m23, m31;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    m12 = (y1 - y2) / (x1 - x2);
    m23 = (y2 - y3) / (x2 - x3);
    m31 = (y3 - y1) / (x3 - x1);

    if (m12 != m23 && m23 != m31 && m31 != m12)
    {
        printf("Lines form a triangle");
    }
    else
        printf("Lines do not form a triangle");

    return 0;
}