char gameblcak[20][48]={ "����������������������������������������������\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "��                                          ��\n",
						 "����������������������������������������������\n"};	
#define snackMaxLength 20
//������
int arrSnack[snackMaxLength][3]={0};
//����
enum{left=-2,right=2,up=-1,down=1};
//���򰴼�
int getKeyDir=left;
//�߳Ե�ʳ��
bool eatted=true;
//ʳ������
int line,row;
//�߳���
int length=2;
//����
int total_Score=1;
//�Ѷȵȼ�
int difficult[3]={500,300,100};
int temp=1;
