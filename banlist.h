#ifndef BANLIST_H
#define BANLIST_H
#include <iostream>
#include <user.h>
#include <QList>
#include <QDebug>
#include <QFile>
#include <QDir>
class BanList
{
public:
    BanList();
    ~BanList();

public:
    QList<std::string> bans;

private:
    QFile *banListFile = new QFile(QDir::currentPath() + "/BanList.txt");

public:
//    void add(int userId);
    void add(std::string userIP);
    bool check(std::string userIP);
//    void del(int userID);
    void del(std::string userIP);
    void showBans();
};

#endif // BANLIST_H
