// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include <QDockWidget>
#include "ui_callstack.h"

class QStandardItemModel;

class CallstackWidget : public QDockWidget
{
    Q_OBJECT

public:
    CallstackWidget(QWidget* parent = 0);

public slots:
    void OnCPUStepped();

private:
    Ui::CallStack ui;
    QStandardItemModel* callstack_model;
};
