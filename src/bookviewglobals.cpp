#include "bookviewglobals.h"
#include "configure.h"

#include <QEventLoop>

bool stopFlag = false;
QWidget *mainWin = 0;

const char CutString[] = "----- cut -----";
const char IntString[] = "----- interrupted -----";

bool checkStop()
{
    QEventLoop().processEvents();
    return stopFlag;
}

QString toAnchor(const QString &str, int num)
{
    return str + QString::number(num);
}