#include <QCoreApplication>
#include <QDebug>
#include"human.h"
void printTreeInfo(QObject *parent)
{
    // TODO: print here info about all nodes
    qDebug() << parent->objectName();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Human* parent = new Human;

    parent->setName("Lucas Grey");
    parent ->setAge(104);
    parent->setSex(Human::DEVELOPER);


    Human *maryGrey = new Human(parent);
    maryGrey->setName("Mary Grey");
    maryGrey->setAge(28);
    maryGrey->setSex(Human::WOMAN);

    Human* human = qobject_cast<Human*>(parent);


    qDebug() << parent->getName()
     << "age:" << human->getName()
     << "sex:" << human->getSex();

    return a.exec();
}
