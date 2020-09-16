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
	//传输通道
	QString m_strTransmitChannel;	//网口1、网口2、网口3
	//响应超时
	quint32 m_nReposTime; //发送查询帧，m_nReposTime没有回复帧
	//传输模式
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
	QString m_strName;	//modbus客户端名称，唯一

	QVector<int> m_vecDevice;
};


#endif
