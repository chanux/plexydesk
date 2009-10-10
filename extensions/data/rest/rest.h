/*******************************************************************************
* This file is part of PlexyDesk.
*  Maintained by : Siraj Razick <siraj@kde.org>
*  Authored By  :
*
*  PlexyDesk is free software: you can redistribute it and/or modify
*  it under the terms of the GNU Lesser General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  PlexyDesk is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU Lesser General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with PlexyDesk. If not, see <http://www.gnu.org/licenses/lgpl.html>
*******************************************************************************/
#ifndef Rest_DATA_H
#define Rest_DATA_H

#include <QtCore>
#include <plexy.h>
#include <backdropinterface.h>
#include <abstractplugininterface.h>
#include <QtNetwork>
#include <datainterface.h>

class VISIBLE_SYM RestData :public PlexyDesk::DataPlugin
{
    Q_OBJECT

public:
    RestData(QObject * object = 0);
    virtual ~RestData();
    void init();
public Q_SLOTS:
    void pushData(QVariantMap& data);
    void replyFinished(QNetworkReply* reply);
    void handleAuth(QNetworkReply*, QAuthenticator*);
Q_SIGNALS:
    void data(QVariantMap&);

private:
    class Private;
    Private * const d;
};


#endif
