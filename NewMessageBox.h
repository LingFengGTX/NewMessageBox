#ifndef __NEWMESSAGEBOX_H__
#define __NEWMESSAGEBOX_H__
/*
	该头文件定义了MessageBox功能函数入口。

	如有疑问请参考附加的开发文档

	关于作者:@非显亮之高光铃丰
	(这是smPlayer用到的窗口，因为拓展性比较大所以单独把它拿了出来了供其他程序调用)

*/
#define NMB_OK 1;
#define NMB_NO 0;
#define NMB_CANCEL 2;
#define NMB_NOASK 0;
#define NMB_YESASK 1;
#define NMB_ICOERROR 1;
#define NMB_ICOINFORMATION 2;
#define NMB_ICOWARNING 3;
#define NMB_ICOQUESTION 4;

/*
	用于存放对话框信息的结构体
*/
typedef struct MB_State{
	int confirm;
	int NextAsk;
}*MB_StateSharp;

//普通的询问提示框，无图标，有确定和取消按钮
int Show_AskMessageBox(char *title,char *context);

//带图标的询问提示框，有确定和取消按钮
int Show_AskICOMessageBox(char *title,char *context,int ICON);

//带“不再提醒”的询问对话框，无图标，有确定和取消按钮
void Show_AskIfMessageBox(char *title,char *context,struct MB_State *temp_Struct);

//带“不再提醒”的询问对话框，有图标，有确定和取消按钮
void Show_AskIfICOMessageBox(char *title,char *context,struct MB_State *temp_Struct,int ICON);

//“丰富按钮”的询问对话框，有是、否、取消按钮，无图标
int Show_AskMoreMessageBox(char *title,char *context);

//简单的询问对话框，只有确定按钮，无图标
void Show_MessageBox(char *title,char *context);

//简单的询问对话框，只有确定按钮，有图标
void Show_ICOMessageBox(char *title,char *context,int ICON);

//“丰富按钮”的询问对话框，有是、否、取消按钮，有图标
int Show_ICOAskMoreMessageBox(char *title,char *context,int ICON);

#endif