#ifndef AUTOCLICKER_H
#define AUTOCLICKER_H

#include <QObject>
#include <QTimer>

class autoclicker
{

public:
    explicit autoclicker(QObject *parent = nullptr);
    void start(int intervalMs, const QString &button);
    void stop();

private slots:
    void doClick();

private:
    QTimer *clickTimer;
    QString buttonType;
};

#endif // AUTOCLICKER_H
