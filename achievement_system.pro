QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AchievementItemWidget.cpp \
    MainWindow.cpp \
    achievementcard.cpp \
        achievementmanager.cpp \
    album.cpp \
    game.cpp \
    photos.cpp \
   progress.cpp\
    e.cpp\
    global.cpp\
    m.cpp\
    main.cpp\
    mylabel.cpp\
        progressmanager.cpp \
    scorer.cpp \
    statistic.cpp \
    submit.cpp
HEADERS += \
    AchievementItemWidget.h \
    achievementcard.h \
    achievementmanager.h \
    album.h \
    game.h \
    mainwindow.h \
    mapmarker.h \
    photos.h \
    progress.h\
    e.h\
    global.h\
    m.h\
    mylabel.h\
    progressmanager.h \
    scorer.h \
    statistic.h \
    submit.h

FORMS += \
        AchievementItemWidget.ui\
        game.ui \
        photos.ui \
        scorer.ui\
        e.ui\
        m.ui \
        statistic.ui \
        submit.ui

TRANSLATIONS += \
    achievement_system_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
        q.qrc
