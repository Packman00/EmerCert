﻿//DpoWidget.h by Emercoin developers
#pragma once
class QTabWidget;
class DpoCreateRootWidget;
class DpoCreateRecordWidget;
class DpoRegisterDocWidget;

class DpoWidget: public QWidget {
	public:
		DpoWidget(QWidget*parent = 0);
		~DpoWidget();
		QString name()const;
		QString value()const;
	protected:
		QTabWidget* _tab = 0;

		DpoCreateRootWidget* _createRoot = 0;
		DpoCreateRecordWidget* _createRecord = 0;
		DpoRegisterDocWidget* _registerDoc = 0;
};