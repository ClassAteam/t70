
#ifndef _utTimer_h
#define _utTimer_h
#include <math.h>
//#include <Windows.h>
#include <QElapsedTimer>
#include <cstring>
class TimeClass //
{

public:
		//TimeClass() {};
        TimeClass(int    iNum);
		TimeClass(const char* name,int    iNum);
		TimeClass(const char* name,double FrameContr,int iNum,int LimProcent);
		//TimeClass(const TimeClass &Time);
        ~TimeClass();
		void   StartNow();//������ ��������� 
		void   StartThen();//����� ��������� ��� N-�� ���������, ��������� � _Frame..... ��� ������ �_FrameOne ���� _iNum=1
		void   StartFrame();//��������� ��� ������ ������, ��������� � _Frame.....;		
		void   StartOut(double FrameOne,double FrameContr, int LimProcent);//�-� ��������� �� �������� ��������� ��������� - ��� �������� min-max �-�� � ��������� ������ �� ���������� ��������, ��������� � _Frame.....;	
		
///--------Frame
		double      _FrameOne;//����� ����� �� 1 ������ 
		double      _FrameAll;//����� �������  ����� ����� ����� ������
		double      _FrameMin;// Min ����� ����� �� ��� ����� ����� ������
		double      _FrameMax;// Max ����� ����� �� ��� ����� ����� ������
		double      _FrameN;//������� ����� ����� ��  N ��������� �������� 
		double      _FrameMinN;//Min ����� ����� �� N ��������� ������
		double      _FrameMaxN;//Max ����� ����� �� N ��������� ������
		//int         _NminN;//����� ��������� ����������� �-�� (����� 110 �������� �� ������������ �-��)�� N ������
		//int         _NmaxN;//����� ��������� ����������� �-�� (����� 110 �������� �� ������������ �-��)�� N ������
		int         _LimProcent;//����� � ��������� ���������� ��� ������� � ����� ������
		double		_ProcentOut;//����� �� ����� � ��������� 
		double      _FrameContr;//��������� �-�� ��������� �������, ���������� ��� ������� � ��

///------------------------------------------------------------------����� Frame
		int         _Prohod;//����� ��������
		int         _iNum;//��������� ��� Frame �� N ��������� ������, ���� N=1,������������ ������ ���� ��������� ��� _FrameOne
		char        _Name[32];
		//int         _iErrCicFrame;  //���-�� ������ ����������� 500�� ��� Frame
		void        CleanFrame();
private:
		void        StartQPF();
		int         _countNminN;//������� ����� ��������� ����������� �-�� (����� LimProcent �������� �� ������������ �-��)�� N ������
		int         _countNmaxN;//������� ����� ��������� ����������� �-�� (����� LimProcent �������� �� ������������ �-��)�� N ������
		int         _lShetCicl;//������� ������(���������)
		int         _shet;//������� �������� ��  N ������(���������)
		bool        _bProhod;//(���������)
		double      _dSumma ;//�������� ���������(���������)
		double      _dSummaN;//�������� ��������� �� N ������(���������)
		double      _dNum;//�������� ����� _iNum(���������)
		double      _FrameLimMin;//����������� �-�� ��������� ���������
		double      _FrameLimMax;//����������� �-�� ������������������

//        LONGLONG    _lStart;//�������� �������� � ������ ������� ��������� ��������� ��� 1-�� ���������(��� Win)
//        static      double      _dQPF; //�������� ������� ����������(��� Win)
        QElapsedTimer* ptim;

};

class GenerateClass //
{
public:
		//GenerateClass() {};
        GenerateClass(double  Period_0,double  Period_1)
		{
			Period0=fabs(Period_0);
			Period1=fabs(Period_1);
			Summator=0.0;
			ret=0;
		};
       // ~GenerateClass();
		bool GenImpuls(double tik )
		{
		    double  PeriodTek;
			if(ret)  
				 PeriodTek=Period1;
			else
				 PeriodTek=Period0;
           Summator+= tik ;
			if(Summator>=PeriodTek)
			{
				Summator=0.0;
				ret=!ret;
			}

			return ret;
		};


private:
		double  Period0;
		double  Period1;
		double  Summator;
		bool    ret;

};
#endif

extern TimeClass Frame[];
extern GenerateClass Gen[];
//extern TimeClass Frame;
//extern TimeClass FrameS;
//extern TimeClass FrameR;
//extern TimeClass FrameNet;
//===================================================
//-------------------TIME-------------------------------------------------
//TimeClass Frame[]=
//{
//    TimeClass("Frame",16.667,200,25),	               //[0]
//    TimeClass("fromIVO)",LtikIVO,100,20),	           //[1]
//    TimeClass("toPrib",20.0,100,20),               //[2]
//    TimeClass("toFromAdvan",LtikInput,200,10),           //[3]
//    TimeClass("Model",10)      //[4]
//  //  TimeClass("Advan All",200),// [5]
//    //TimeClass("Write DO",200),//  [6]
//    //TimeClass("Frame AI13",200),//[7]
//    //TimeClass("Frame AI15",200),//[8]
//};
//------------------------------------------------------------------------
//  1. Frame[0].StartFrame();
//------------------------------------
//  2. Frame[1].StartNow();
//     		UpdateInput();
//     Frame[1].StartThen();
//
//===================================================
