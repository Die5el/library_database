QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    QT_functions.cpp \
    engine/library_database/Book.cpp \
    engine/library_database/Borrow.cpp \
    engine/library_database/Database.cpp \
    engine/library_database/Field.cpp \
    engine/library_database/FileHandler.cpp \
    engine/library_database/Node.cpp \
    engine/library_database/Queue.cpp \
    engine/library_database/Reader.cpp \
    engine/library_database/SLinkedList.cpp \
    engine/library_database/gui.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    QT_functions.h \
    engine/library_database/Book.h \
    engine/library_database/Borrow.h \
    engine/library_database/Database.h \
    engine/library_database/Field.h \
    engine/library_database/FileHandler.h \
    engine/library_database/Node.h \
    engine/library_database/Queue.h \
    engine/library_database/Reader.h \
    engine/library_database/SLinkedList.h \
    engine/library_database/gui.h \
    mainwindow.h

    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    database_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    engine/library_database.sln \
    engine/library_database/bo2oks.txt \
    engine/library_database/books.txt \
    engine/library_database/borrows.txt \
    engine/library_database/library_database.vcxproj \
    engine/library_database/library_database.vcxproj.filters \
    engine/library_database/readers.txt \
    engine/library_database/x64/Debug/library_database.exe.recipe \
    engine/library_database/x64/Debug/library_database.ilk \
    engine/library_database/x64/Debug/library_database.log \
    engine/library_database/x64/Debug/library_database.tlog/CL.command.1.tlog \
    engine/library_database/x64/Debug/library_database.tlog/CL.read.1.tlog \
    engine/library_database/x64/Debug/library_database.tlog/CL.write.1.tlog \
    engine/library_database/x64/Debug/library_database.tlog/Cl.items.tlog \
    engine/library_database/x64/Debug/library_database.tlog/library_database.lastbuildstate \
    engine/library_database/x64/Debug/library_database.tlog/link.command.1.tlog \
    engine/library_database/x64/Debug/library_database.tlog/link.read.1.tlog \
    engine/library_database/x64/Debug/library_database.tlog/link.write.1.tlog \
    engine/library_database/x64/Debug/vc143.idb \
    engine/library_database/x64/Debug/vc143.pdb \
    engine/x64/Debug/library_database.exe \
    engine/x64/Debug/library_database.pdb


