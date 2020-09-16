#pragma once

#include <QWidget>
#include <qdialog.h>
#include "ui_Channelsettings.h"

#pragma execution_character_set("utf-8")

class Channelsettings : public QDialog
{
	Q_OBJECT

public:
	Channelsettings(QDialog *parent = Q_NULLPTR);
	~Channelsettings();
	void CchannelID(QString name)
	{
		ui.label_3->setText(QString("�豸")+name);
		ui.label_5->setText(name + QString("%DRV"));
		ui.label_7->setText(name);
	}
private:
	Ui::Channelsettings ui;
private slots:
	void on_pushButton_clicked();
};