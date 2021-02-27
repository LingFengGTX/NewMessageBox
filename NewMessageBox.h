#ifndef __NEWMESSAGEBOX_H__
#define __NEWMESSAGEBOX_H__
/*
	��ͷ�ļ�������MessageBox���ܺ�����ڡ�

	����������ο����ӵĿ����ĵ�

	��������:@������֮�߹����
	(����smPlayer�õ��Ĵ��ڣ���Ϊ��չ�ԱȽϴ����Ե����������˳����˹������������)

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
	���ڴ�ŶԻ�����Ϣ�Ľṹ��
*/
typedef struct MB_State{
	int confirm;
	int NextAsk;
}*MB_StateSharp;

//��ͨ��ѯ����ʾ����ͼ�꣬��ȷ����ȡ����ť
int Show_AskMessageBox(char *title,char *context);

//��ͼ���ѯ����ʾ����ȷ����ȡ����ť
int Show_AskICOMessageBox(char *title,char *context,int ICON);

//�����������ѡ���ѯ�ʶԻ�����ͼ�꣬��ȷ����ȡ����ť
void Show_AskIfMessageBox(char *title,char *context,struct MB_State *temp_Struct);

//�����������ѡ���ѯ�ʶԻ�����ͼ�꣬��ȷ����ȡ����ť
void Show_AskIfICOMessageBox(char *title,char *context,struct MB_State *temp_Struct,int ICON);

//���ḻ��ť����ѯ�ʶԻ������ǡ���ȡ����ť����ͼ��
int Show_AskMoreMessageBox(char *title,char *context);

//�򵥵�ѯ�ʶԻ���ֻ��ȷ����ť����ͼ��
void Show_MessageBox(char *title,char *context);

//�򵥵�ѯ�ʶԻ���ֻ��ȷ����ť����ͼ��
void Show_ICOMessageBox(char *title,char *context,int ICON);

//���ḻ��ť����ѯ�ʶԻ������ǡ���ȡ����ť����ͼ��
int Show_ICOAskMoreMessageBox(char *title,char *context,int ICON);

#endif