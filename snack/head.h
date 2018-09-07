char gameblcak[20][48]={ "■■■■■■■■■■■■■■■■■■■■■■■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■                                          ■\n",
						 "■■■■■■■■■■■■■■■■■■■■■■■\n"};	
#define snackMaxLength 20
//蛇数组
int arrSnack[snackMaxLength][3]={0};
//方向
enum{left=-2,right=2,up=-1,down=1};
//方向按键
int getKeyDir=left;
//蛇吃到食物
bool eatted=true;
//食物坐标
int line,row;
//蛇长度
int length=2;
//分数
int total_Score=1;
//难度等级
int difficult[3]={500,300,100};
int temp=1;
