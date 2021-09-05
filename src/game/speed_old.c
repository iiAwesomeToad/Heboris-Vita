#include "speed_old.h"

//C7T4よりも前の速度データ
//ただしC7T4から「新たに追加された項目」は含まれています。
// Beginnerモードレベルアップテーブル
int32_t		lvTableBeg[101] =
{
	   2,   3,   4,   5,   6,   8,  10,  12,  15,  20,	// 0*
	   1,   1,   2,   4,   6,  10,  12,  15,  20,  30,	// 1*
	   2,   4,   6,  10,  15,  20,  30,  45,  60,  60,	// 2*
	  60,  60,  60,  60,  10,  20,  30,  60,  60,  60,	// 3*
	  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,	// 4*
	  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,	// 5*
	 120, 120, 120, 120, 120, 120, 120, 120, 120, 120,	// 6*
	 120, 120, 120, 120, 120, 240, 240, 240, 240, 240,	// 7*
	 240, 240, 240, 240, 240, 240, 240, 240, 240, 240,	// 8*
	 300, 300, 300, 300, 300, 300, 300, 300, 300, 300,	// 9*
	1200
};

/*
// Beginnerモードレベルアップテーブル
int32_t		lvTableBeg[101] =
{
//	  *0,  *1,  *2,  *3,  *4,  *5,  *6,  *7,  *8,  *9	TGMは10倍
	   2,   3,   4,   5,   6,   8,  10,  12,  15,  20,	// 0*
	  20,   1,   2,   4,   6,  10,  12,  15,  20,  30,	// 1*
	   2,   4,   6,  10,  15,  20,  30,  45,  60,  60,	// 2*
	  60,  60,  60,  60,  10,  20,  30,  60,  60,  60,	// 3*
	  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,	// 4*
	  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,	// 5*
	 120, 120, 120, 120, 120, 120, 120, 120, 120, 120,	// 6*
	 120, 120, 120, 120, 120, 240, 240, 240, 240, 240,	// 7*
	 240, 240, 240, 240, 240, 240, 240, 240, 240, 240,	// 8*
	 300, 300, 300, 300, 300, 300, 300, 300, 300, 300,	// 9*
	1200
};
*/

//// Beginnerモードレベルアップテーブル
//int32_t		lvTableBeg[101] =
//{
////	  *0,  *1,  *2,  *3,  *4,  *5,  *6,  *7,  *8,  *9	TGMは10倍
//	   1,   2,   4,   6,   8,  10,  12,  15,  20,  30,	// 0*
//	   2,   4,   6,   8,  10,  12,  15,  20,  30,  45,	// 1*
//	   6,   8,  10,  12,  15,  20,  30,  45,  60,  75,	// 2*
//	  10,  12,  15,  20,  30,  45,  60,  75,  90, 105,	// 3*
//	  15,  20,  30,  45,  60,  75,  90, 105, 120, 150,	// 4*
//	  30,  45,  60,  75,  90, 105, 120, 150, 180, 210,	// 5*
//	  60,  75,  90, 105, 120, 150, 180, 210, 240, 270,	// 6*
//	  90, 105, 120, 150, 180, 210, 240, 270, 300, 330,	// 7*
//	 120, 150, 180, 210, 240, 270, 300, 330, 360, 390,	// 8*
//	 180, 210, 240, 270, 300, 330, 360, 390, 420, 450,	// 9*
//	1200
//};

// Heboris Masterモード前半レベルアップテーブル
int32_t		lvTable[31] =
{
//	  +0,  +1,  +2,  +3,  +4,  +5
	   1,   2,   3,   5,   6,   8,	//  0+
	  10,  12,  15,  20,  30,  30,	//  6+
	   1,   5,  12,  30,  60,  60,	// 12+
	  60,  60,  60, 120, 120, 180,	// 18+
	 180, 240, 300, 300, 240, 180,	// 24+
	1200
};

//// Heboris Masterモード前半レベルアップテーブル
//int32_t		lvTable[31] =
//{
////	  +0,  +1,  +2,  +3,  +4,  +5
//	   1,   1,   3,   6,   9,  12,	//  0+
//	  15,  15,  23,  23,  30,  30,	//  6+
//	   1,  10,  30,  60,  60,  60,	// 12+
//	 120, 120, 180, 180, 240, 240,	// 18+
//	 300, 300, 240, 240, 180, 180,	// 24+
//	1200
//};

// TGM Masterモード前半レベルアップテーブル #1.60c3
int32_t lvTableTgm[51] =
{
//	 *00, *10, *20, *30, *40, *50, *60, *70, *80, *90
	   1,   1,   1,   2,   3,   4,   5,   6,   8,  12,	// 0**
	  30,  30,  30,  30,  46,  46,  46,  60,  60,  60,	// 1**
	   1,   2,   8,  15,  30,  60,  120,  120,  120,  120,	// 2**
	 240, 240, 240, 360, 360, 360, 480, 480, 480, 480,	// 3**
	 600, 600, 600, 600, 480, 480, 480, 360, 360, 360,	// 4**
	1200
};

// Beginnerモード初期値
int32_t	wait1_Beginner = 26;		// 固定→次
int32_t	wait2_Beginner = 40;		// ブロック消去
int32_t	wait3_Beginner = 28;		// 接地→固定
int32_t	waitt_Beginner = 15;		// 横溜め

// Masterモード初期値
int32_t	wait1_master_half = 26;		// 固定→次
int32_t	wait2_master_half = 40;		// ブロック消去
int32_t	wait3_master_half = 28;		// 接地→固定
int32_t	waitt_master_half = 15;		// 横溜め

// 20Gモード初期値
int32_t	wait1_20G_half = 26;		// 固定→次
int32_t	wait2_20G_half = 40;		// ブロック消去
int32_t	wait3_20G_half = 28;		// 接地→固定
int32_t	waitt_20G_half = 12;		// 横溜め

// Master・20Gモード後半レベルアップテーブル
int32_t		wait1_master_tbl[17] =	// 固定→次
{
//	  30,  33,  36,  39,  42,  45,  48,  51,  54,  57,  60,  63,  66,  69,  72,  75,  78
//	 500, 550, 600, 650, 700, 750, 800, 850, 900, 950,1000,1050,1100,1150,1200,1250,1300
	  27,  27,  25,  25,  18,  18,  16,  15,  12,  10,  9,  9,  8,  8,  8,  7,  6
};
int32_t		wait2_master_tbl[17] =	// ブロック消去
{
//	  30,  33,  36,  39,  42,  45,  48,  51,  54,  57,  60,  63,  66,  69,  72,  75,  78
//	 500, 550, 600, 650, 700, 750, 800, 850, 900, 950,1000,1050,1100,1150,1200,1250,1300
	  25,  22,  18,  15,  10,  9,   6,   5,   3,   2,   3,   3,   3,   3,   3,   3,   3
};
int32_t		wait3_master_tbl[17] =	// 接地→固定
{
//	  30,  33,  36,  39,  42,  45,  48,  51,  54,  57,  60,  63,  66,  69,  72,  75,  78
//	 500, 550, 600, 650, 700, 750, 800, 850, 900, 950,1000,1050,1100,1150,1200,1250,1300
	  28,  28,  24,  24,  20,  20,  18,  18,  16,  15,  15,  15,  15,  14,  13,  12,  12
};
int32_t		waitt_master_tbl[17] =	// 横溜め
{
//	  30,  33,  36,  39,  42,  45,  48,  51,  54,  57,  60,  63,  66,  69,  72,  75,  78
//	 500, 550, 600, 650, 700, 750, 800, 850, 900, 950,1000,1050,1100,1150,1200,1250,1300
	   9,   9,   9,   9,   8,   8,   8,   8,   7,   7,   7,   7,   6,   6,   6,   6,   6
};

// Devilモードレベルアップテーブル
int32_t		wait1_devil_tbl[14] =	// 固定→次
{
//	   0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36,  39
//	   0, 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300
	  18,  16,  14,  10,   8,   7,   6,   5,   4,   3,   5,   5,   4,   5
};
int32_t		wait2_devil_tbl[14] =	// ブロック消去
{
//	   0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36,  39
//	   0, 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300
	  13,  11,  10,   9,   8,   7,   7,   6,   6,   5,   5,   5,   5,   5
};
int32_t		wait3_devil_tbl[14] =	// 接地→固定
{
//	   0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36,  39
//	   0, 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300
	  28,  26,  25,  22,  20,  17,  16,  14,  13,  13,  13,  13,  13,  13
};
int32_t		waitt_devil_tbl[14] =	// 横溜め
{
//	   0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36,  39
//	   0, 100, 200, 300, 400, 500, 600, 700, 800, 900,1000,1100,1200,1300
	  10,  10,  10,   9 ,  9,   9,   9,   8,   7,   7,   7,   7,   7,   7
};

// Beginnerモードロール用(TIME TRIAL, Level 200)
int32_t	speed_beginner_roll = 1200;	// 落下速度(1200 = 20G)
int32_t	wait1_beginner_roll = 26;	// 固定→次
int32_t	wait2_beginner_roll = 40;	// ブロック消去
int32_t	wait3_beginner_roll = 28;	// 接地→固定
int32_t	waitt_beginner_roll = 15;	// 横溜め

// Master・20Gモードロール用(TIME TRIAL, Level 999)
int32_t	speed_master_roll = 1200;	// 落下速度(1200 = 20G)
int32_t	wait1_master_roll = 10;		// 固定→次
int32_t	wait2_master_roll = 2;		// ブロック消去
int32_t	wait3_master_roll = 15;		// 接地→固定
int32_t	waitt_master_roll = 7;		// 横溜め

// DEVILモードロール用(TIME TRIAL, Level 1300)
int32_t	speed_devil_roll = 1200;	// 落下速度(1200 = 20G)
int32_t	wait1_devil_roll = 5;		// 固定→次
int32_t	wait2_devil_roll = 5;		// ブロック消去
int32_t	wait3_devil_roll = 13;		// 接地→固定
int32_t	waitt_devil_roll = 7;		// 横溜め

// 遅延防止モード用
int32_t	speed_limit15 = 1200;		// 落下速度(1200 = 20G)
int32_t	wait1_limit15 = 5;			// 固定→次
int32_t	wait2_limit15 = 5;			// ブロック消去
int32_t	wait3_limit15 = 13;			// 接地→固定

// TOMOYOモードレベルアップテーブル #1.60c7m1
int32_t lvTabletomoyo[31] =
{
	   1,   1,   1,   2,   3,   4,   5,   6,   8,  12, // 0**
	  15,  15,  15,  15,  23,  23,  23,  30,  30,  30, // 1**
	   1,   1,   8,  15,  30,  60,  60,  60,  60,  60, // 2**
	1200
};
// TOMOYOモードWAIT値 #1.60c7m1
int32_t	wait1_tomoyo = 26;		// 固定→次
int32_t	wait2_tomoyo = 40;		// ブロック消去
int32_t	wait3_tomoyo = 28;		// 接地→固定
int32_t	waitt_tomoyo = 15;		// 横溜め

// VERSUSモード #1.60c7p5
int32_t	speed_versus = 1;		// 落下速度(1200 = 20G)
int32_t	wait1_versus = 26;		// 固定→次
int32_t	wait2_versus = 40;		// ブロック消去
int32_t	wait3_versus = 28;		// 接地→固定
int32_t	waitt_versus = 15;		// 横溜め

// ACEモードレベルアップテーブル
int32_t		lvTableAce[15] =
{
	1, 10, 20, 30, 60, 100, 130, 160, 190, 220, 240, 300, 1200, 1200, 1200
};

// ACEアナザーモードレベルアップテーブル
int32_t		lvTableAcea[15] =
{
	1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200
};

// ACEモード制限時間
int32_t		timeLimitAce[15] =
{
	5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400, 5400
};

// ACEアナザーモード制限時間
int32_t		timeLimitAcea[15] =
{
	5400, 5100, 4800, 4500, 4200, 3900, 3600, 3300, 3000, 2700, 2400, 2100, 1800, 1500, 1000
};


// ACEモードWAIT値
int32_t	wait1_Ace = 26;		// 固定→次
int32_t	wait2_Ace = 40;		// ブロック消去
int32_t	wait3_Ace = 28;		// 接地→固定
int32_t	waitt_Ace = 15;		// 横溜め

// ACEアナザーモードレベルアップテーブル
int32_t		wait1_Acea_tbl[15] =	// 固定→次
{
//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	 18,18,16,16,16,12,12,11,11, 10, 7,  7,  6,  6, 5
};
int32_t		wait2_Acea_tbl[15] =	// ブロック消去
{
//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	 15,14,14,13,13,10,9, 9, 9,  8,  6,  6,  5,  5,  4
};
int32_t		wait3_Acea_tbl[15] =	// 接地→固定
{
//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	 28,28,26,26,24,20,20,19,18,17, 14, 14, 13, 13, 12
};
int32_t		waitt_Acea_tbl[15] =	// 横溜め
{
//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	 10,10, 9, 9, 9, 8, 8, 8, 8,  8,  7,  7,  7,  6,  6
};

// ハイスピード１レベルアップテーブル
int32_t		lvTableHiSpeed1[15] =
{
	20, 30, 60, 120, 180, 240, 300, 1200, 1200, 1200, 1200, 1200, 1200, 1200, 1200
};
int32_t	wait1_HiSpeed1 = 26;		// 固定→次
int32_t	wait2_HiSpeed1 = 40;		// ブロック消去
int32_t	wait3_HiSpeed1 = 30;		// 接地→固定
int32_t	waitt_HiSpeed1 = 12;		// 横溜め

// ハイスピード２レベルアップテーブル
int32_t	wait1_HiSpeed2 = 26;		// 固定→次
int32_t	wait2_HiSpeed2 = 40;		// ブロック消去
int32_t	wait3_HiSpeed2 = 30;		// 接地→固定
int32_t	waitt_HiSpeed2 = 12;		// 横溜め

// オールドスタイルレベルアップテーブル
int32_t		lvTableHeboGB[15] =
{
//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15, 17, 20, 30
};

int32_t	wait1_HeboGB = 0;		// 固定→次

int32_t	wait2_HeboGB = 60;	// ブロック消去

int32_t		wait3_HeboGB_tbl[15] =	// 接地→固定
{
//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	 60,30,20,15,12,10,8, 8, 7, 6,  5,  4,  7,  3,  2
};
int32_t		waitt_HeboGB_tbl[15] =	// 横溜め
{
//	 1,  2, 3, 4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15
	 15,15,14,14, 14, 13, 13, 13, 12, 12, 11, 11, 10, 10, 10
};
