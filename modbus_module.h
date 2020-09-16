#pragma once

#include "modbus_global.h"
#include "devicestudio/plugin_module.h"

#include <qmap.h>

class IMainWindow;
class QJsonObject;

class MODBUS_EXPORT CModubsModule : public IPluginModule
{
	Q_OBJECT
public:
	CModubsModule();

	//add by gw in 20200831
	virtual bool SaveToProjectFile(QDomDocument* pXml);

	virtual bool LoadFromProjectFile(QDomDocument* pXml);

	virtual IMainModule* GetMainModule() const
	{
		return m_pMainModule;
	}
	//add end

	virtual void SetLoadDeviceName(const QString& strDeviceName);

	virtual bool SaveToJsonFile(QJsonObject* pJson);
public:
	virtual void Init(IMainModule* pMainModule);
	virtual void UnInit();

private:
	//�����ṹ�в�������
	void CreateTreeItem();

private slots:
	void Slot_ClickLeftTreeItem(const QModelIndex& mIndex);
	void Slot_CloseOneTabWidget(int iIndex);
private:
	//ģ����ع���
	IMainModule* m_pMainModule;
	//��������ؿؼ�����
	IMainWindow* m_pMainWindow;

	//���ṹ ���  ��Ӧ��tabҳ
	QMap<int, QWidget*> m_MIndexTab;
	//���ṹ tabҳ  ���
	QMap<QWidget*, int> m_MTabIndex;
};
