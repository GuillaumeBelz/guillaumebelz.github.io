#pragma once

#include <QObject>
#include <QtQml/qqmlregistration.h>

class Counter : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(int value READ value NOTIFY valueChanged)

public:
    using QObject::QObject;

    int value() const { return m_value; }

public slots:
    void increment()
    {
        ++m_value;
        emit valueChanged();
    }

signals:
    void valueChanged();

private:
    int m_value = 0;
};
