//ȭ�� ��°� ���õ� Ŭ����

#pragma once
#include "HeaderSet.h"

class DrawMap
{
public:
	DrawMap();

	//�ܼ� ������ cols = width, lines = height, title = title
	void Init();

	/// <summary>
	/// �ܼ�â�� Ŀ���� ���ϴ� ��ġ�� �����ִ� �Լ� 
	/// </summary>
	inline void gotoxy(int x, int y)
	{
		COORD Pos = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

	}

	/// <summary>
	/// ȭ�鿡 �׸��带 �׸���
	/// </summary>
	void GridDraw(int start_x, int start_y, int width, int height);

	/// <summary>
	/// ȭ�鿡 �޴��� �׸���
	/// </summary>
	void MenuDraw(int start_x, int start_y);
	~DrawMap();
};

