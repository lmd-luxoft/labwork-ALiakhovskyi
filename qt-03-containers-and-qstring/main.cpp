#include <QCoreApplication>
#include <QDebug>
#include <QStack>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> names;
    names << "Mary" << "Ann" << "Charlynn" << "Marylynn" << "Margaret"
          << "Kate" << "Rose" << "GwendolynSailor"<<"O";
    QListIterator<QString> javaIterator(names);
    QString longestName;
    QString shortestName = names.at(0);
    while(javaIterator.hasNext()) {
        QString currentName = javaIterator.next();
         if(longestName.length()<currentName.length())
         {
             longestName = currentName;
         }
    }
    QString output("Longest name: %1");


    for (QList<QString>::iterator i = names.begin();i != names.end(); ++i)
    {
        if(shortestName.length()>(*i).length())
        {
            shortestName = *i;
        }


    }

 qDebug()<<"Shortest name"<<shortestName;
 qDebug() << shortestName.prepend("Shortest name: ");





    qDebug() << output.arg(longestName);

    return a.exec();
}
