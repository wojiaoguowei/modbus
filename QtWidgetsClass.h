#pragma once

#include <QWidget>
#include <qdialog.h>
#include "ui_QtWidgetsClass.h"
#include "Channelsettings.h"

class CModbusClientData;

class QtWidgetsClass : public QDialog
{
	Q_OBJECT

public:
	QtWidgetsClass(QWidget *parent = Q_NULLPTR);
	~QtWidgetsClass();
	Channelsettings CS;

	void SetModbusClientPoiner(void *p);
private:
	Ui::QtWidgetsClass ui;
	CModbusClientData *m_pData;
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void clicked_channel(void);
};
