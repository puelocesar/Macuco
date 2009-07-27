TEMPLATE = app
SOURCES = flickable.cpp \
    main.cpp \
    webview.cpp \
    networkaccessmanager.cpp \
    mainwindow.cpp \
    errorbox.cpp
HEADERS = flickable.h \
    webview.h \
    networkaccessmanager.h \
    mainwindow.h \
    webpage.h \
    errorbox.h
QT += network \
    webkit
FORMS += errorbox.ui
RESOURCES += resources.qrc
