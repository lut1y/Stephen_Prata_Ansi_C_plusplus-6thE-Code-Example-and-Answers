// tabtenn0.h -- базовый класс для клуба по настольному теннису
#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <string>
using std::string;
// простой базовый класс
class TableTennisPlayer0
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer0 (const string & fn = "none",
                       const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};
#endif
