#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//����
#define COL 3//����

void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//'*' -- ���Ӯ
//'#' -- ����Ӯ
//'P' -- ƽ��
//'C' -- ����
char IsWin(char board[ROW][COL], int row, int col);//�ж���Ӯ