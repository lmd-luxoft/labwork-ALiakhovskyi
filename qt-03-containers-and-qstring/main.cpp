#include <QCoreApplication>
#include <QDebug>
#include <QStack>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> names;
    names << "Mary" << "Ann" << "Charlynn" << "Marylynn" << "Margaret"
          << "Kate" << "Rose" << "Gwendolyn";
    QListIterator<QString> javaIterator(names);
    QString longestName;
    while(javaIterator.hasNext()) {
        QString currentName = javaIterator.next();
         if(longestName.length()<currentName.length())
         {
             longestName = currentName;
         }
    }
    QString output("Longest name: %1");
    qDebug() << output.arg(longestName);

    return a.exec();
}
