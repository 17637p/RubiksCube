#include "Title.h"

//32 * 32 ���� // aseprite�� �ȼ� ��� -> python���� ��ȯ
int ru[1024] = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 12, 12, 12, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };
int bik[1024] = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 12, 12, 12, 12, 12, 7, 7, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };
int s[1024] = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 12, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 12, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 12, 12, 0, 0, 0, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 12, 12, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 12, 12, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 12, 12, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 12, 12, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };
int cu[1024] = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 7, 7, 7, 7, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 7, 7, 7, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 12, 12, 12, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 12, 12, 12, 12, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 12, 12, 12, 12, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 12, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 7, 7, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 12, 12, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 12, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 12, 12, 12, 12, 7, 7, 12, 12, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };
int be[1024] = { 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 12, 12, 12, 12, 12, 7, 7, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 12, 0, 0, 0, 12, 12, 0, 0, 0, 0, 12, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 12, 12, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 12, 12, 12, 12, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 7, 7, 7, 7, 7, 7, 7, 7, 12, 12, 12, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };

int start[1600] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 12, 12, 12, 12, 12, 0, 0, 0, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 7, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 12, 0, 0, 0, 12, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 0, 0, 0, 7, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 12, 0, 0, 0, 12, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 7, 7, 7, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 0, 12, 0, 0, 12, 0, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 7, 7, 7, 0, 7, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 0, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 12, 0, 12, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 7, 0, 7, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 12, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 12, 12, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//int start[320] = { 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 7, 7, 7, 7, 7, 0, 7, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 7, 0, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 7, 0, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0, 0, 0 };
//int keySetting[250] = { 7, 0, 0, 7, 0, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 7, 7, 7, 7, 0, 7, 7, 7, 0, 7, 7, 7, 0, 7, 7, 7, 0, 7, 0, 0, 7, 0, 0, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 0, 0, 7, 7, 7, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 7, 7, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 7, 0, 7, 0, 7, 0, 7, 7, 0, 7, 0, 7, 0, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 7, 7, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 7, 7, 7, 7, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 7, 7, 0, 7, 0, 0, 7, 0, 0, 7, 7, 7, 0 };

int clockwiseIcon[256] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0 };
int anticlockwiseIcon[256] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0 };
//37 * 8
int spacebar[296] = { 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 7, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 7, 7, 7, 0, 7, 7, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 7, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 0, 7, 0, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0 };
int qweasdzxc[220] = { 0, 7, 7, 0, 0, 7, 0, 0, 0, 7, 0, 7, 7, 7, 7, 12, 0, 7, 7, 0, 0, 0, 7, 7, 7, 0, 7, 7, 7, 0, 12, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 7, 7, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 12, 7, 0, 0, 7, 0, 7, 0, 0, 0, 0, 7, 0, 0, 7, 12, 0, 0, 0, 7, 0, 7, 0, 7, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 7, 0, 0, 0, 7, 0, 7, 7, 7, 0, 12, 7, 7, 7, 7, 0, 0, 7, 7, 0, 0, 7, 0, 0, 7, 12, 0, 0, 7, 0, 0, 0, 7, 0, 0, 7, 0, 0, 0, 7, 0, 7, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 0, 0, 12, 7, 0, 0, 7, 0, 0, 0, 0, 7, 0, 7, 0, 0, 7, 12, 0, 7, 0, 0, 0, 7, 0, 7, 0, 7, 0, 0, 0, 0, 7, 7, 7, 0, 0, 7, 0, 7, 0, 0, 7, 7, 7, 7, 12, 7, 0, 0, 7, 0, 7, 7, 7, 0, 0, 7, 7, 7, 0, 12, 7, 7, 7, 7, 0, 7, 0, 7, 0, 0, 7, 7, 7 };

const int length = 32;
const int paddingX = 10;
const int paddingY = 50;

void PrintTitle(const int paddingX, const int paddingY)
{
	//��
	PrintRu(paddingX, paddingY);
	// ��
	PrintBik(paddingX, paddingY);
	// ��
	PrintS(paddingX, paddingY);
	// ť
	PrintCu(paddingX, paddingY);
	// ��
	PrintBe(paddingX, paddingY);

	PrintStart();
	//PrintKeySetting();
}

void PlayTitleAnimation()
{
	//Ÿ��Ʋ
	for (int i = -2; i <= 2; i++)
	{
		PrintTitle(10, 20 + i);
	}
	for (int i = 2; i >= -2; i--)
	{
		PrintTitle(10, 20 + i);
	}
}

void PrintRu(const int paddingX, const int paddingY)
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (ru[i * 32 + j] == 12)
			{
				SetColor(12);
			}
			else if (ru[i * 32 + j] == 7)
			{
				SetColor(7);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(paddingX + j, paddingY + i, "��");
		}
	}
}

void PrintBik(const int paddingX, const int paddingY)
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (bik[i * 32 + j] == 12)
			{
				SetColor(6);
			}
			else if (bik[i * 32 + j] == 7)
			{
				SetColor(7);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(paddingX + 32 + j, paddingY + 2 + i, "��");
		}
	}
}

void PrintS(const int paddingX, const int paddingY)
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (s[i * 32 + j] == 12)
			{
				SetColor(10);
			}
			else if (s[i * 32 + j] == 7)
			{
				SetColor(7);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(paddingX + 64 + j, paddingY + 4 + i, "��");
		}
	}
}

void PrintCu(const int paddingX, const int paddingY)
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (cu[i * 32 + j] == 12)
			{
				SetColor(9);
			}
			else if (cu[i * 32 + j] == 7)
			{
				SetColor(7);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(paddingX + 16 + j, paddingY + 34 + i, "��");
		}
	}
}

void PrintBe(const int paddingX, const int paddingY)
{
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			if (be[i * 32 + j] == 12)
			{
				SetColor(11);
			}
			else if (be[i * 32 + j] == 7)
			{
				SetColor(7);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(paddingX + 48 + j, paddingY + 36 + i, "��");
		}
	}
}

void PrintStart()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (start[i * 100 + j] == 7)
			{
				SetColor(7);
			}
			else if (start[i * 100 + j] == 12)
			{
				SetColor(12);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(120 + j, 56 + i, "��");
		}
	}
}

void PrintClockwise()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (clockwiseIcon[i * 16 + j] == 7)
			{
				SetColor(7);
			}
			else if (clockwiseIcon[i * 16 + j] == 12)
			{
				SetColor(12);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(5 + j, 5 + i, "��");
		}
	}
}
 
void PrintAntiClockwise()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (anticlockwiseIcon[i * 16 + j] == 7)
			{
				SetColor(7);
			}
			else if (anticlockwiseIcon[i * 16 + j] == 12)
			{
				SetColor(12);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(5 + j, 5 + i, "��");
		}
	}
}

void PrintKey()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 44; j++)
		{
			if (qweasdzxc[i * 44 + j] == 7)
			{
				SetColor(7);
			}
			else if (qweasdzxc[i * 44 + j] == 12)
			{
				SetColor(12);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(5 + j, 80 + i, "��");
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 37; j++)
		{
			if (spacebar[i * 37 + j] == 7)
			{
				SetColor(7);
			}
			else if (spacebar[i * 37 + j] == 12)
			{
				SetColor(12);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(55 + j, 78 + i, "��");
		}
	}
}

/*

void PrintKeySetting()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (keySetting[i * 50 + j] == 7)
			{
				SetColor(7);
			}
			else
			{
				SetColor(0);
			}
			ScreenPrint(120 + j, 55 + i, "��");
		}
	}
}*/