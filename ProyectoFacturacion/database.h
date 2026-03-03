#ifndef DATABASE_H
#define DATABASE_H

#include <QString>

class Database
{
public:
    static bool init(const QString& filePath);
};

#endif
