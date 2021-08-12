// tabtenn1.h -- базовый класс для клуба по настольному теннису
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;
// простой базовый класс 
class TableTennisPlayer1 {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer1 (const string & fn = "none",
                       const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

// простой производный класс
class RatedPlayer1 : public TableTennisPlayer1
{
private:
    unsigned int rating;
public:
    RatedPlayer1 (unsigned int r = 0, const string & fn = "none",
                 const string & ln = "none", bool ht = false);
    RatedPlayer1(unsigned int r, const TableTennisPlayer1 & tp);
    unsigned int Rating() const { return rating; }
    void ResetRating (unsigned int r) {rating = r;}
};

#endif
