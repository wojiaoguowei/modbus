#ifndef dddd_config_data
#define dddd_config_data


#include <qstring.h>
#include <qvector.h>

class  CBaseData
{
public:
	CBaseData();
	virtual ~CBaseData();
public:
	virtual void Save() = 0;

	virtual void SetModifyFlag(bool bFlag) = 0;

	virtual bool GetModifyFlag() = 0;
public:


protected:
	bool m_bModifyFlag;
};

class CDeviceData : public CBaseData
{
	CDeviceData();
	~CDeviceData();
	
	virtual void Save()
	{

	}

	virtual void SetModifyFlag(bool bFlag)
	{
		return;
	}

	virtual bool GetModifyFlag()
	{
		return true;
	}

private:
	//����ͨ��
	QString m_strTransmitChannel;	//����1������2������3
	//��Ӧ��ʱ
	quint32 m_nReposTime; //���Ͳ�ѯ֡��m_nReposTimeû�лظ�֡
	//����ģʽ
	quint8 m_cTransmitMode;			//0-TCP     1-UDP   
};




class CModbusClientData : public CBaseData
{
public:
	CModbusClientData();
	~CModbusClientData();

	virtual void Save()
	{

	}

	virtual void SetModifyFlag(bool bFlag)
	{

	}

	virtual bool GetModifyFlag()
	{
		return true;
	}

	void SetClientName(const QString& strName);


private:
	QString m_strName;	//modbus�ͻ������ƣ�Ψһ

	QVector<int> m_vecDevice;
};


#endif
