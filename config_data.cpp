#include "config_data.h"

/*! \fn Config::CBaseData::CBaseData()
*********************************************************************************************************
** \brief Config::CBaseData::CBaseData
** \details
** \return
** \author gw
** \date 2016��1��4��
** \note
********************************************************************************************************/
CBaseData::CBaseData()
	:m_bModifyFlag(false)
{

}

/*! \fn Config::CBaseData::~CBaseData()
*********************************************************************************************************
** \brief Config::CBaseData::~CBaseData
** \details
** \return
** \author gw
** \date 2016��1��4��
** \note
********************************************************************************************************/
CBaseData::~CBaseData()
{

}

CDeviceData::CDeviceData()
{

}

CDeviceData::~CDeviceData()
{

}


CModbusClientData::CModbusClientData()
{

}

CModbusClientData::~CModbusClientData()
{

}

void CModbusClientData::SetClientName(const QString& strName)
{
	m_strName = strName;
 }
