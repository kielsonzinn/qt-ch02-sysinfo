#ifndef SYSINFOMACIMPL_H
#define SYSINFOMACIMPL_H

#include <QVector>
#include <QtGlobal>

#include "sysinfo.h"

class SysInfoMacImpl : public SysInfo {

public:
    SysInfoMacImpl();

public:
    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();

private:
    QVector<qulonglong> mCpuLoadLastValues;

};

#endif // SYSINFOMACIMPL_H
