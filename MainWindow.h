/*=====================================================================

 BRPrint3D, Open Source 3D Printing Host

 Copyright (C) 2015 BRPrint3D Authors

 This file is part of the BRPrint3D project

 BRPrint3D is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 BRPrint3D is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with BRPrint3D. If not, see <http://www.gnu.org/licenses/>.

 ======================================================================*/

#ifndef BRPRINT3D_H
#define BRPRINT3D_H

#include <QMainWindow>
#include <QString>
#include "Dialogs/aboutbrprint.h"
#include "Dialogs/legalwarning.h"
#include "Dialogs/help.h"
#include "PrinterSettings.h"

namespace Ui
{
class BrPrint3D;
}

class BrPrint3D : public QMainWindow
{
    Q_OBJECT

public:
    explicit BrPrint3D(QWidget *parent = 0);
    ~BrPrint3D();
    void init();
    
private:
    Ui::BrPrint3D *ui;
    PrinterSettings psettings;
    QString filePath;

    void setEnabled(bool b);
    void openFile();
    void connectPrinter(bool checked);
    void startPrintJob(bool checked);
    void stopPrintJob();
    void hidePrinterSettings();
    void changeIcon(bool checked);
    void showDialogs(bool b);
signals:
    void s_playStatus(bool b);
    void s_pauseStatus(bool b);
};

#endif // BRPRINT3D_H
