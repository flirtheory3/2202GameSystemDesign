#include "DrawMap.h"
#include "GameManager.h"
#include "KeyControl.h"

int main()
{
	DrawMap dm;
	KeyControl kc;
	GameManager gm;
	char key;

	dm.Init();
	
	while (1)
	{
		dm.GridDraw(0, 0, 80, 30);
		
		switch (dm.MenuDraw(35, 23))
		{
			case 0:
			{
				gm.GameLoop();
				break;
			}
			case 1:
			{
				//���� ����
				break;
			}
			case 2:
			{
				//�ɼ�
				break;
			}
			case 3:
			{
				//����
				return 0;
			}

		}
		system("cls");
	}






	////Ű�Է� Ȯ��
	//do
	//{
	//	key = _getch();
	//	cout << "input key is " << kc.KeyInput(key);
	//} while (kc.KeyInput(key) != -1);
	
	
	
	//_getch();
	return 0;
}