#include "QtWidgetsClass.h"
#include "config_data.h"

#pragma execution_character_set("utf-8")

QtWidgetsClass::QtWidgetsClass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.tableWidget->clear();
	ui.tableWidget->setColumnCount(9);


	QStringList headers;
	headers << "ID" << "名称"<<"IP地址" << "从站地址" << "响应超时（ms）" << "允许的超时次数" << "重连间隔" << "复位变量" << "通道";
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//整行选中的方式
	//ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//禁止修改
	ui.tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//可以选中单个

}


void QtWidgetsClass::on_pushButton_clicked()
{
	int Timeout = ui.lineEdit->text().toInt();
	int TCPClint_settingsrowcount = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(TCPClint_settingsrowcount);
	QPushButton* channel = new QPushButton(". . .");
	connect(channel, SIGNAL(clicked()), SLOT(clicked_channel()));
	ui.tableWidget->setCellWidget(TCPClint_settingsrowcount, 8, channel);

	QTableWidgetItem* Item0 = new QTableWidgetItem(QString::number(TCPClint_settingsrowcount));
	QTableWidgetItem* Item1 = new QTableWidgetItem(QString("设备")+QString::number(TCPClint_settingsrowcount));
	QTableWidgetItem* Item4 = new QTableWidgetItem(QString::number(Timeout));

	ui.tableWidget->setItem(TCPClint_settingsrowcount, 0, Item0);
	ui.tableWidget->setItem(TCPClint_settingsrowcount, 1, Item1);
	ui.tableWidget->setItem(TCPClint_settingsrowcount, 4, Item4);

	//判断设备号是否重复
	   // connect(ui.tableWidget, SIGNAL(QTableWidget::cellChanged(int,int)), this, SLOT(slotItemChanged(QTableWidgetItem*)));
	QString a = ui.tableWidget->item(TCPClint_settingsrowcount, 1)->text();
	QString b = ui.tableWidget->item(TCPClint_settingsrowcount, 4)->text();
	for (int i = 0; i < TCPClint_settingsrowcount; i++)
	{
		if (a == ui.tableWidget->item(i, 0)->text())
		{
			QString a1 = b;
			int row = a1.toInt();
			//row += 1;
			ui.tableWidget->setItem(TCPClint_settingsrowcount, 0, new QTableWidgetItem(QString("设备") + QString::number(row)));

		}
		if (b == ui.tableWidget->item(i, 1)->text())
		{
			QString a2 = b;
			int row1 = a2.toInt();
			// row1 += 1;
			ui.tableWidget->setItem(TCPClint_settingsrowcount, 1, new QTableWidgetItem(QString::number(row1 + 1)));

		}

	}
	//CS.CchannelID(ui.tableWidget->item(ui.tableWidget->currentRow(), 1)->text());
}


void QtWidgetsClass::on_pushButton_2_clicked()
{

	int currentrow = ui.tableWidget->currentRow();
	if (currentrow < 0)
	{
		return;
	}



}

void QtWidgetsClass::clicked_channel(void)
{
	QString channelnumber = ui.tableWidget->item(ui.tableWidget->currentRow(), 0)->text();

	Channelsettings cs;
	cs.CchannelID(channelnumber);
	//cs.show();
	cs.exec();

}


QtWidgetsClass::~QtWidgetsClass()
{
}

void QtWidgetsClass::SetModbusClientPoiner(void* p)
{
	m_pData = (CModbusClientData*)p;
}
