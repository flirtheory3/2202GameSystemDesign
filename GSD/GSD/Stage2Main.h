#pragma once
void Buffer_Flip(void);
void Buffer_Clear(void);
void Sprite_Draw(int iX, int iY, wchar_t chSprite);
void Buffer_Print(int j, int i, char c);
void Bullet_Shoot();
void Charector_Move();
void Enemy_Create(); //�� ����
void Enemy_Attack(); //�� ����
void Enemy_Move(); //�� ������
void ShowOption(); //����â ǥ��
void init_Stage(); //�������� �ε�
void init_Game(); //���� �ε�

//Main �Լ� ����
int stage2(void);