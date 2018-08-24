/*
# Copyright (c) 2018, Ole-André Rodlie <ole.andre.rodlie@gmail.com> All rights reserved.
#
# Available under the 3-clause BSD license
# See the LICENSE file for full details
#
*/

#ifndef SERVICE_H
#define SERVICE_H

#include <QObject>

class qtfm : public QObject
{
    Q_OBJECT

public:
    explicit qtfm(){}

signals:
    void pathRequested(QString path);

public slots:
    void openPath(QString path);
};

#endif // SERVICE_H
