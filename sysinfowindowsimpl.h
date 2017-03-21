#ifndef SYSINFOWINDOWSIMPL_H
#define SYSINFOWINDOWSIMPL_H

#include <QVector>
#include <QtGlobal>

#include "sysinfo.h"

typedef struct _FILETIME FILETIME;

class SysInfoWindowsImpl : public SysInfo {

public:
    SysInfoWindowsImpl();

public:
    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();
    qulonglong convertFileTime( const FILETIME& fileTime ) const;

private:
    QVector<qulonglong> mCpuLoadLastValues;

};

#endif // SYSINFOWINDOWSIMPL_H
