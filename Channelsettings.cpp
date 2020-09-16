#include "Channelsettings.h"
#include<qcombobox.h>
#include<qlineedit.h>
#include<qtextedit.h>

Channelsettings::Channelsettings(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.tableWidget->clear();
	ui.tableWidget->setColumnCount(10);
	QStringList headers;
	headers << "ID" << "����" << "��Ϣ���ͣ������룩" << "ѭ������ʱ��(ms)" << "��ƫ��" << "������" << "������" << "дƫ��" << "д����" << "ע��";
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	ui.tableWidget->setColumnWidth(2, 180);
	ui.tableWidget->setColumnWidth(3, 180);

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//����ѡ�еķ�ʽ
	//ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//��ֹ�޸�
	ui.tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//����ѡ�е���

	//ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);    //x������Ӧ���
	    //Ȼ������Ҫ��������ʹ�ÿ�ȵ���
	ui.tableWidget->horizontalHeader()->setStretchLastSection(true);
}


void Channelsettings::on_pushButton_clicked()
{
	int rowcount = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(rowcount);
	QComboBox* messagetype = new QComboBox();
	//QTextEdit* cycletime = new QTextEdit();
	QLineEdit* cycletime = new QLineEdit();
	ui.tableWidget->setCellWidget(rowcount, 3, cycletime);
	int variant[8] = { 0x01,0x02,0x03,0x04,0x05,0x06,0x0f,0x10 };
	QString functionnumber[8] = { "�����λ����Ȧ��-0x01","�����λ����ɢ���룩-0x02","�����λ����Ȧ��-0x03","������֣�����Ĵ�����-0x04","д����λ����Ȧ��-0x05","д�����֣��Ĵ�����-0x06","д���λ����Ȧ��-0x0F"
	,"д����֣��Ĵ���)-0x10" };
	//QVariant userdata;
	//userdata.setValue(variant)
	for (int i = 0; i < 8; i++)
	{
		messagetype->addItem(functionnumber[i],variant[i]);
	}
	ui.tableWidget->setCellWidget(rowcount, 2, messagetype);
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);

}

Channelsettings::~Channelsettings()
{
}
