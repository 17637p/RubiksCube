#include<stdio.h>
#include<Windows.h>
#include<math.h>
#define M_PI       3.14159265358979323846   // pi
// COORD는 좌표계

// 벡터 구조체
struct Vector3
{
	float x, y, z;
};

void gotoxy(short x, short y);								// 출력할 좌표에 커서를 옮겨주는 함수
COORD ScreenCOORD(Vector3 startPoint, Vector3 endPoint);	//, Vector3 종점b
void DrawLine(COORD firstPoint, COORD secondPoint);			// 좌표를 입력받고 선을 긋는 함수

/// 면을 그리는 함수
// 선을 그리는 함수를 만들었으니 어렵지 않겠다고 생각했는데
// 생각하면 생각할수록 그냥 나오는 함수는 아닌것 같다.
//
void DrawSurface(COORD x1, COORD x2, COORD y1, COORD y2)
{
	//
	//면을 출력하기 위해 알아야 하는것
	// 1. 투사면의 x, y 선분
	//		1)x선분을 알기위해 알아야 하는것
	//			>> 투사면의 x,y좌표
	//				(1)투사면의 xy좌표를 알기위해 알아야 하는 것
	//					점 a, b의 직선의 방정식과 교점
	// 
	// 
	//					
	// 2. 교점을 구분해서 출력하면 어떨까?? 		
	// 
	// 선분4개로 범위를 지정할까?
	// 
	//
}

int main(void)
{
	system("mode con cols=120 lines=60");
	
	while (1)
	{
		// 공간 만들기 
		int screenWidth = 60 ;
		int screenHeight = 60;
		for (int i = 0; i < screenWidth; i++)
		{
			for (int j = 0; j < screenHeight; j++)
			{
				if (j == 0 || j == screenHeight - 1)
				{
					gotoxy(i, j);
					printf("*");
				}
				else if (i == 0 || i == screenWidth - 1)
				{
					gotoxy(i, j);
					printf("*");
				}
			}
		}

		const int scale = 1;
		const int cubeLength = 20;

		float centerX = screenWidth / 2;
		float centerY = screenHeight / 2;
		float centerZ = 30;

		// 큐브
		
		Vector3 start = { centerX , centerY, -100 }; // 시작점 start point

		Vector3 center = { centerX , centerY, }; // 중앙좌표
		Vector3 center2 = { centerX , centerY, centerZ }; // z값 다른 중앙좌표

		COORD middlePoint = ScreenCOORD(start, center);
		COORD middlePoint2 = ScreenCOORD(start, center2);	// 다른 중앙좌표 출력용

		// x축은 같고 y축은 거꾸로 그려져있음
		Vector3 a = { centerX - (cubeLength * scale), centerY + (cubeLength * scale), centerZ - (cubeLength * scale) };
		Vector3 b = { centerX + (cubeLength * scale), centerY + (cubeLength * scale), centerZ - (cubeLength * scale) };
		Vector3 c = { centerX + (cubeLength * scale), centerY + (cubeLength * scale), centerZ + (cubeLength * scale) };
		Vector3 d = { centerX - (cubeLength * scale), centerY + (cubeLength * scale), centerZ + (cubeLength * scale) };
		Vector3 e = { centerX - (cubeLength * scale), centerY - (cubeLength * scale), centerZ - (cubeLength * scale) };
		Vector3 f = { centerX + (cubeLength * scale), centerY - (cubeLength * scale), centerZ - (cubeLength * scale) };
		Vector3 g = { centerX + (cubeLength * scale), centerY - (cubeLength * scale), centerZ + (cubeLength * scale) };
		Vector3 h = { centerX - (cubeLength * scale), centerY - (cubeLength * scale), centerZ + (cubeLength * scale) };

		COORD a1 = ScreenCOORD(start, a);
		COORD b1 = ScreenCOORD(start, b);
		COORD c1 = ScreenCOORD(start, c);
		COORD d1 = ScreenCOORD(start, d);

		COORD e1 = ScreenCOORD(start, e);
		COORD f1 = ScreenCOORD(start, f);
		COORD g1 = ScreenCOORD(start, g);
		COORD h1 = ScreenCOORD(start, h);

		// 큐브 그리기
		DrawLine(a1, b1);
		DrawLine(c1, d1);
		DrawLine(h1, g1);
		DrawLine(e1, f1);

		DrawLine(e1, a1);
		DrawLine(f1, b1);
		DrawLine(g1, c1);
		DrawLine(h1, d1);

		DrawLine(d1, a1);
		DrawLine(c1, b1);
		DrawLine(g1, f1);
		DrawLine(h1, e1);

		gotoxy(middlePoint.X - strlen("mid point") / 2, middlePoint.Y);			// 중심점 1
		printf("mid point");

		gotoxy(middlePoint2.X - strlen("mid point222") / 2, middlePoint2.Y);	// 중심점 2
		printf("mid point222");

		
	}
	return 0;
}

void gotoxy(short x, short y) {
	COORD pos = { x*2,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/// 2차원 좌표를 찾는 함수
// 시선벡터와 3차원 공간의 벡터를 입력받고
// 2차원 공간에 투영된 좌표를 반환하는 함수
COORD ScreenCOORD(Vector3 startPoint, Vector3 endPoint)	//, Vector3 종점b
{
	COORD temp = { 0,0 };
	Vector3 directionVector; // 방향벡터

	directionVector.x = endPoint.x - startPoint.x;
	directionVector.y = endPoint.y - startPoint.y;
	directionVector.z = endPoint.z - startPoint.z;

	float t;				// t = 시점, 투사면, 3D 오브젝트간 z거리 비율
	// 시점벡터z / 방향벡터z
	t = startPoint.z / directionVector.z;

	temp.X = startPoint.x - directionVector.x * t;
	temp.Y = startPoint.y - directionVector.y * t;
	return temp;
}

/// 선을 그리는 함수
// 처음 점과 점을 그리는 함수는 동일한 x축 혹은 y축에 있을 때, 
// 혹은 점과 점의 위치에 따라 순서를 지켜서 인자로 넘겨주어야 했다.
// 하지만 이제 점의 위치나 순서에 상관없이 두 점의 좌표만 넘겨주면
// 선을 이어주는 함수를 만들었다.
// 2023-04-22 (18:30)
// ++ 이 함수는 정말 나를 귀찮게 했다.
// 콘솔 화면비 때문에 항상 x좌표에 2를 곱해서 표기했는데 아무생각 없이 전부 곱하다가
// 큐브 출력위치가 전부 오른쪽으로 몰빵 되어버렸다.
// 이걸 고치는데 너무 많은 시간을 썼다.
// 디버그.. 잘하자.. 생각만 하지말고 꼼꼼히 읽어가면서 문제를 찾자;
// 2023-04-23 (01:30)
void DrawLine(COORD firstPoint, COORD secondPoint)
{
	// 두 점의 위치가 같을 경우 그 자리에 출력후 함수 종료
	if (firstPoint.X == secondPoint.X && firstPoint.Y == secondPoint.Y)	
	{
		gotoxy(firstPoint.X, firstPoint.Y);
		printf("*");
		return;
	}
	
	// 두 점의 y이 같은 경우 x를 출력하는 함수를 실행
	else if (firstPoint.Y == secondPoint.Y)									
	{
		if (firstPoint.X < secondPoint.X)
		{
			for (float i = firstPoint.X; i <= secondPoint.X; i++)
			{
				gotoxy(i, firstPoint.Y);
				printf("*");
			}
			return;
		}
		else if (firstPoint.X > secondPoint.X)
		{
			for (float i = secondPoint.X; i <= firstPoint.X; i++)
			{
				gotoxy(i, firstPoint.Y);
				printf("*");
			}
			return;
		}

	}
	
	// 두 점의 x값이 같은 경우 y를 출력하는 함수 실행
	else if (firstPoint.X == secondPoint.X)									
	{
		if (firstPoint.Y < secondPoint.Y)
		{
			for (float i = firstPoint.Y; i <= secondPoint.Y; i++)
			{
				gotoxy(firstPoint.X, i);
				printf("*");
			}
			return;
		}
		else if (firstPoint.X > secondPoint.X)
		{
			for (float i = secondPoint.Y; i <= firstPoint.Y; i++)
			{
				gotoxy(firstPoint.X, i);
				printf("*");
			}
			return;
		}
	}
	float ratioXY = ((float)firstPoint.Y - secondPoint.Y) / ((float)firstPoint.X - secondPoint.X);
	float c = firstPoint.Y - (firstPoint.X * ratioXY);

	if (firstPoint.X < secondPoint.X)										// 두 점의 x y좌표가 모두 다른 경우 직선의 방정식을 이용한 좌표를 출력하는 함수
	{
		for (float i = firstPoint.X; i <= secondPoint.X; i++)
		{
			gotoxy(i, ratioXY * i + c);
			printf("*");
		}
	}
	else if (firstPoint.X > secondPoint.X)
	{
		for (float i = secondPoint.X; i <= firstPoint.X; i++)
		{
			gotoxy(i, ratioXY * i + c);
			printf("*");
		}
	}
}