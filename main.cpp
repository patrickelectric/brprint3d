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

#include "brprint3d.h"
#include <QApplication>
#include <QTranslator>
#include <QSettings>
#include <QFontDatabase>
#include <QDebug>
#include <QLocale>
#include <QStyleFactory>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("KDE");

    QCoreApplication::setOrganizationDomain("kde.org");

    QCoreApplication::setApplicationName("brprint3d");

    /*
        QTranslator translator;
        QLocale locale;
        QString lang = QLocale::languageToString(locale.language());

        if(lang=="Portuguese")
        {
          translator.load(":/Translations/PT_portuguese.qm");
          app.installTranslator(&translator);

        }
        else
        {
            translator.load(":/Translations/EN_english.qm");
            app.installTranslator(&translator);

        }*/
    BrPrint3D w;

    w.show();
    w.init();


    return app.exec();
}
