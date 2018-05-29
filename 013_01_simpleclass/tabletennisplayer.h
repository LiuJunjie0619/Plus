#ifndef TABLETENNISPLAYER_H
#define TABLETENNISPLAYER_H

#include <iostream>
#include <string>

class TableTennisPlayer
{
public:
    TableTennisPlayer(const std::string & fn = "none",
                      const std::string & ln = "none",
                      bool ht = false);
//    TableTennisPlayer(const TableTennisPlayer & tp);
    void Name() const;
    bool HasTable() const {return m_hasTable;};
    void ResetTable(bool v){m_hasTable = v;};
public:
    std::string m_firstName;
    std::string m_lastName;
    bool m_hasTable;
};

#endif // TABLETENNISPLAYER_H
