#ifndef MY_MACROS_H
#define MY_MACROS_H

#include <math.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y)) // ̳���� � ���� �����
#define MAX(x, y) ((x) > (y) ? (x) : (y)) // �������� � ���� �����
#define POW(x, n) (pow((x), (n))) // ϳ�������� �� �������

// ������� ��� ��������� ����������
#define PRINTI(w) printf(#w "=%d\n", w)
#define PRINTR(w) printf(#w "=%f\n", (float)w)

#endif // MY_MACROS_H
